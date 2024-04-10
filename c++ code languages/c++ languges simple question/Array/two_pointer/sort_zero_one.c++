#include<iostream>
#include<vector>
using namespace std;
void Sort_zero_and_one(vector<int>&v){
    int zero_count = 0;
    for(int ele : v){
        if(ele==0) zero_count++;
    }
    for(int i=0;i<v.size();i++){
        if(i<zero_count){
            v[i]=0;
        }
        else v[i]=1;
    }
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
    Sort_zero_and_one(v);
    for(int ele : v){
        cout<<ele<<" ";
    }
}