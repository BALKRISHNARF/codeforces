#include<iostream>
using namespace std;
int main(){
    int a,n;
    cin>>a;
    int sum=0;
    int power =1;
    for(;a!=0;){
        n=a%10;
        sum+=n*power;
        power *=2;
        a=a/10;

    }
    cout<<sum;
}