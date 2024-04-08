#include<iostream>
using namespace std;
int main(){
    int x=8;
    int* p = &x;
    cout<<x<<endl;
    *p=56;
    cout<<x;
}