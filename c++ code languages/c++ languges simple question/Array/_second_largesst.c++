#include<iostream>
#include<climits>
using namespace std;
int mian(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max;

    int smaxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]) max=arr[i];
    }
    cout<<smax;


}