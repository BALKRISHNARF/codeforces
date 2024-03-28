#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    float a = 100;
    for(int i=1 ; i<=n; i++){
        cout<<a ;
        a*=.5;

    }
    return 0;
}