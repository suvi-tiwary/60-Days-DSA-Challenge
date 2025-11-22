#include <iostream>
using namespace std;
 
def BinarySearch ( int arr( int n),int tar){
    int st=0,end=n-1;
    while(st<=end){
       int mid= st+ (end-st)/2;
        if(tar==arr[mid]){
            return mid
        }
        elseif(tar>arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}
int main (){
   arr[5]=[2,3,4,5,6,6,9]
   BinarySearch(arr,9)

    return 0;
}