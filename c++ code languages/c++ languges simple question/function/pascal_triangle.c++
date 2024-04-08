#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    for(int i=1;i<=x;i++){
        a=a*i;
    }
    return a;
}
int combition(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    cin>>n;
    int nsp=n-1;
    for(int i =0;i<=n;i++){
        for(int k=0;k<=nsp;k++){
            cout<<" ";
        }
        nsp--;
        for(int j =0;j<=i;j++){
            cout<<combition(i,j)<<" ";
        }
        cout<<endl;
    }
}