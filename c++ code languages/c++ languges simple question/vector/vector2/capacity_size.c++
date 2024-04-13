//to show to capacity is not change and size is change
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    cout<<"size of the  vector "<<v.size()<<endl;
    cout<<"capacity of the  vector "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
     cout<<"size of the  vector "<<v.size()<<endl;
    cout<<"capacity of the  vector "<<v.capacity()<<endl;
    

}