#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        for(int j=a-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}