//we have find unique number  pattern :array manipulation,basically we are doing whenever we getting doublets overwrite with -1
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,2,3,4,6,8,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=-1;
                arr[j]=-1;
            }
        }
    }
    for(int ele :arr){
        if(ele>0){
            cout<<ele<<" ";
        }
    }
}