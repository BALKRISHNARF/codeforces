#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a ,int b){
    int hcf =1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}


int main(){
    int a;
    cout<<"entre the 1st number :"<<endl;
    cin>>a;
    int b;
    cout<<"entre the 2nd number :"<<endl;
    cin>>b;
    cout<<gcd(a,b);

}