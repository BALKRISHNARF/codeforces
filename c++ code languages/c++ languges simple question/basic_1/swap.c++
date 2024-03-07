#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int t;
    t=b;
    b=a;
    a=t;
    cout<<"a:"<<a<<endl<<"b:"<<b;
    return 0;
}