#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp--;
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int g=i-1;g>=1;g--){
            cout<<g;
        }
        cout<<endl;
    }
}