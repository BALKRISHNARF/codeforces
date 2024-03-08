#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter x:"<<endl;
    int x;
    cin>>x;
    int occurrence=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x)
        occurrence++;
    }
    cout<<occurrence<<endl;
return 0;
}