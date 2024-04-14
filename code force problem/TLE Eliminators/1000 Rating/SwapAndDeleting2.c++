#include<iostream>
typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll q=0;q<t;q++){
        string s;
        cin>>s;
        ll no=0,n1=0,nsum=0,l=s.size();
        for(ll i=0;i<s.size();i++){
            if(s[i]== '0') no++;
            else n1++;
        }
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0') n1--;
            else no--;
            if(no<0){
                cout<<n1<<endl;
             break;
            }
             if(n1<0){
                cout<<no<<endl;
             break;
            }
            if(n1==0 && no==0) 
              cout<<0<<endl;
                
        }
    }
} 