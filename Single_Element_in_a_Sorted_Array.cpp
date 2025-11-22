#include<iostream>
using namespace std;


 int Single_Element_in_a_Sorted_Array(int arr[],int n){
    int st=0,end=n-1;
    while(st<end){                       //? why not =
        int mid = st+(end-st)/2;
        if(mid%2==1){
            mid--;
        }
        
         if(arr[mid]==arr[mid+1]){
                st=mid+2;
            }
         else{
                end=mid;                        
            }
    }
    return st;
 }


 // 2nd method
 
 int second(int arr[],int n){
    int st=0,end=n-1;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(mid==0 && arr[mid]!=arr[1]) 
        return mid;
         if(mid==n-1 && arr[mid]!=arr[mid+1]) 
        return mid;
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1])
           return mid;
        if(mid%2==0){
            if(arr[mid-1]==arr[mid]){
                end=mid-1;
            }
            else if(arr[mid]==arr[mid+1]){
                st=mid+1;
            }

          else{
             if(arr[mid-1]==arr[mid]){
                st=mid+1;
            }
            else if(arr[mid]==arr[mid+1]){
                end=mid-1;
              
            }
          }  
        }
    }

 }
int main(){
  int arr[]={1,1,2,2,3,4,4,5,5};
  int n= sizeof(arr)/sizeof(arr[0]);
  int result = Single_Element_in_a_Sorted_Array(arr,n);
  cout << "singler element in the sorted array is " << arr[result] << " at index " << result ;


  // 2nd method
int result1 = second(arr,n);
  cout << "singler element in the sorted array is " << arr[result1] << " at index " << result1 ;

  
    return 0;
}