#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,6,4,9,3};
    int*  ptr=arr;
    for(int i=0;i<6;i++){
        cout<<ptr<<" "<<endl;;
        ptr++;
    }
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
    }

}