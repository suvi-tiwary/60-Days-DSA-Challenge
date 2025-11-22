#include<iostream>
using namespace std ;


int PeakElement(int arr[],int n){
    int st=1,end=n-2;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                 return mid;
        }
        
        
       else if(arr[mid-1]<arr[mid]){
            st= mid+1;                        // increasing slope peak found at the right side 
        }
        else{
            end=mid-1;
        }
      
    }
      return -1;
     
}
int main(){
    int arr[]={3,4,31,15,9,7};
     int n = sizeof(arr) / sizeof(arr[0]);

    int result= PeakElement(arr,n);
    cout << "Peak Element is " << arr[result] << " at index " << result;
  
    return 0;
}