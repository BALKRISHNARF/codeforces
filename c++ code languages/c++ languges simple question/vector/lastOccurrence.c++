//find the last occurrence of an element x in a given array
#include<iostream>
#include<vector>
using namespace std;
int main(){
   int a;
   cin>>a;
   int ans;
   vector<int>v(6);
   for(int i=0;i<6;i++){
    //int el;
    cin>>v[i];
    //v.push_back(el);
    if(v[i]==a){
        ans=i;
    }
    cout<<ans;
   }
return 0;
}    
   
   

