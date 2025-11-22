#include <iostream>
using namespace std;
 
int BinarySearch ( int arr[],int n,int tar){
    int st=0,end=n-1;
    while(st<=end){
      int mid= st+ (end-st)/2;
        if(tar==arr[mid]){
            return mid;
        }
        else if(tar>arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main (){
  int arr[]={2,3,4,5,6};
 int result = BinarySearch(arr,5,2);
   cout << result;

    return 0;
}