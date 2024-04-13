#include<iostream>
#include<vector>
using namespace std;

void reversePartArray(int i,int j,vector<int> &a){
      int c=1;
    int b = 3;
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
    
    int a,b;
    cin>>a>>b;
    reversePartArray(a,b,v);
    for (int ele : v)
      cout<<ele<<" ";
}