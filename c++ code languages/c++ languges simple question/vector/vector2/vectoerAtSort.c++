#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int >v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    v.push_back(5);
    //v.at(3)=5 ; //updating through at fxn at 3rd element =5
    //cout<<v.at(3); //print ing 3rd element through at fxn
    for(int i=0 ;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0 ;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}
