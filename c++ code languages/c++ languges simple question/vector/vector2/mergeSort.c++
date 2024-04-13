#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& arr1 , vector<int>& arr2){
    int n = arr1.size();
    int z = arr2.size();
    vector<int> res(n+z);
    int i = 0;  //for arr1
    int j = 0;  //for arr2
    int k = 0;  //for res
    while(i<n && j<z){
        if(arr1[i]<arr2[j]){
            res[k++]=arr1[i++];
        }
        else res[k++]=arr2[j++];
    }
    if(i==n){
        while(j<z){
            res[k++]=arr2[j++];
        }
    }
    if(j==z){
        while(i<n){
            res[k++]=arr1[i++];
        }
    }
    return res;
}
int main(){
    cout<<"enter the size of the 1st vector: "<<endl;
    int a;
    cin>>a;
    cout<<"enter the size of the 2st vector: "<<endl;
    int b;
    cin>>b;
    vector<int> arr1;
    for(int i=0;i<a;i++){
        int ele;
        cin>>ele;
        arr1.push_back(ele);
    }

    vector<int> arr2;
    for(int i=0;i<b;i++){
        int q;
        cin>>q;
        arr2.push_back(q);
    }
    
    vector<int> v = merge(arr1,arr2);
    for(int ele :v)
     cout<<ele<<" ";
}