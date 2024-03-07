#include<iostream>


using namespace std;
int binarysearch(int arr[],int r,int l,int x){
    
    while(l<=r){
        int mid=(l+(r-1))/2;
        if(arr[mid]==x)
        return x;
        if(arr[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return -1;
}
 int main(){
    int arr[]={1,2,3,3,4,566,7};
    int x=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=binarysearch(arr, n ,0,x);
    result== -1 ?cout<<"element is not in array" :cout<<"element is in the array "<<result;
    return 0;
    
 }