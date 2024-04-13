#include<iostream>
#include<vector>
using namespace std;
bool checkPriffixSuffix(vector<int>& v){
    int total_sum = 0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    int Priffix_sum = 0;
    for(int i=0;i<v.size();i++){
        Priffix_sum+=v[i];
        int Suffix_sum = total_sum - Priffix_sum;
        if(Priffix_sum==Suffix_sum)
           return true;
    }
    return false;
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
    cout<<checkPriffixSuffix(v)<<" ";
}