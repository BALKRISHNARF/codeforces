#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,6,4,9,7};
    int* ptr = arr;
    for(int i=0;i<=6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;
    ptr[0]=8;
    ptr++;
    *ptr=9;
    ptr--;
    cout<<endl;
    for(int i=0;i<=6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

}