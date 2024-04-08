#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    int a=1;
    for(int i=1;i<n;i++){
        int b=1;
        for(int j =1;j<n-i+1;j++){
            cout<<b;
            b++;
        }
        for(int k=1;k<=a;k++){
            cout<<" ";
            b++;
        }
        a+=2;
          for(int g=1;g<n-i+1;g++){
            cout<<b;
            b++;
        }
        cout<<endl;

    }

}