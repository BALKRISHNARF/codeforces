#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows";
    cin>>m;
    int n;
    cout<<"enter no of col";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[m][n];
        }
    }
    //max
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }
    cout<<max<<" ";
    }
