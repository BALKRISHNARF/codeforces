#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,8,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=sum;
    }
    for(int ele :arr)
    cout<<ele<< " ";
}