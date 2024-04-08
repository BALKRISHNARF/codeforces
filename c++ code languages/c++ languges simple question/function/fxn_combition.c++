#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    for(int i=1;i<=x;i++){
        a=a*i;
    }
    return a;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r));
}