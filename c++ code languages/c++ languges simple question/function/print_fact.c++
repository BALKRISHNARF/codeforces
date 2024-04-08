#include<iostream>
using namespace std;
int fact(int x){
    f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fact(i)<<endl;
    }
}