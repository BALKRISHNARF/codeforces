#include<iostream>
using namespace std;
int mian(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<100;i++){
        cin>>arr[100];
    }
    bool flag = false;
    for(int i=0;i<100;i++){
        if(arr[i]==n) {
            flag = true;
            cout<<"number is found";
        }

    }
    if(flag== false) cout<<"number is not found";
}