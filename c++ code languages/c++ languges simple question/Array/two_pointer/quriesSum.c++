/*
given an array of intgers of size n.
answer q queries where you need to print
the sum of values in agiven range of indices 
from a to b (both included).
note the value of a and b in queirs follow 
1-based indexing*/


#include<iostream>
#include<vector>
using namespace std;
void Priffix_sum(int a,int b,vector<int>& v){
    int sum  = 0;
    for(int i=a-1;i<=b-1;i++){
        sum+=v[i];

    }
    cout<<sum<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"enter the value of a:";
    int a;
    cin>>a;
    cout<<"enter the value of b:";
    int b;
    cin>>b;
    Priffix_sum(a,b,v);
}