//it is pass by value these ,how is proved
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){
    a[0]=100;
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
}
    int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}