#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    int x= 2;
    int idx = -1;
    for(int i=v.size()-1;i>=0;i--){
        if(v.at(i)==x){
            idx=i;
            cout<<idx;
            break;
        }
    }
    cout<<idx;
}

