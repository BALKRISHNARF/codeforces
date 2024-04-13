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
    int i=0;
    int j = v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i++]=v[j];
        v[j--]=temp;
    }
    for (int ele : v)
      cout<<ele<<" ";
}