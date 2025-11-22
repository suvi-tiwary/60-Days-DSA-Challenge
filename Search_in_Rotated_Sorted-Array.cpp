#include<iostream>
using namespace std;



int Rotated_Sorted_Array(int arr[],int n,int tar){
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(tar==arr[mid]){
            return mid;
        }
        if(arr[st]<=arr[mid]){          // here st is less than mid then left is sorted otherwise right is sorted
          if( tar>=arr[st] && tar<arr[mid]){       // check if the target lies inside the sorted array or not 
              end=mid-1;                      
          }
          else{
            st=mid+1;
          }
        }   
        else{
          if(tar>arr[mid] && tar<=arr[end]){
            st=mid+1;
          }
          else{
            end=mid-1;
          }
        }           
    }
    return -1;
}
int main(){
    int arr[] = {5, 6, 7, 0, 1, 2, 3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int tar=3;
    int result= Rotated_Sorted_Array(arr,n,tar);
    cout << "Target element is at index  " << result  << "is " << arr[result] ;
    return 0;
}
