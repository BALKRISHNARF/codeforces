#include<iostream>
#include<vector>
using namespace std;
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
    int a = v.size()-1;
    int b;
    b=v[0];
    for(int i=0;i<v.size();i++){
        v[i]=v[a];
        a--;
    }
    v[v.size()-1]=b;
    for(int ele :v){
        cout<<ele<<" ";
    }
}