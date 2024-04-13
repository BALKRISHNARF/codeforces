#include<iostream>
#include<vector>
using namespace std;

void reversePartArray(int i,int j,vector<int> &a){
    int c=i;
    int b = j;
    while(c<=b){
        int temp = a[c];
        a[c++]=a[b];
        a[b--]=temp;
    }
    
}    
    int main(){
    cout<<"enter the size of the vector";
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    int a;
    cin>>a;
    int b = v.size();
    a = a>b ? a%b : a;
    reversePartArray(0,b-a-1,v);
    reversePartArray(b-a,b-1,v);
    reversePartArray(0,b,v);
    for (int ele : v)
      cout<<ele<<" ";
}