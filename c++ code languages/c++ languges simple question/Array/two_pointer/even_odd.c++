#include<iostream>
#include<vector>
using namespace std;
void Sort_by_parity(vector<int>&v){
    int left_pointer=0;
    int right_pointer=v.size()-1;
    while(left_pointer<right_pointer){
        if(v[left_pointer]%2==1 && v[right_pointer]%2==0){
           swap(v[left_pointer++],v[right_pointer--])
           //or left_pointer++,right_pointer--; check krna

        }
        if(v[left_pointer]%2==0){
            left_pointer++;
        }
        if(v[right_pointer]%2!=0){
            right_pointer++;
        }
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
    Sort_by_parity(v);
    for(int ele : v){
        cout<<ele<<" ";
    }
}