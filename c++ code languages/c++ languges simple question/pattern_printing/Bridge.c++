#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int a=1;
    for(int i=1;i<n;i++){
        
        for(int j =1;j<n-i+1;j++){
            cout<<"*";
        }
        for(int k=1;k<=a;k++){
            cout<<" ";
        }
        a+=2;
          for(int g=1;g<n-i+1;g++){
            cout<<"*";
        }
        cout<<endl;

    }

}