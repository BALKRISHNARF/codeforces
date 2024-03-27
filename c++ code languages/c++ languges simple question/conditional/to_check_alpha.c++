#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the char : "<<endl;
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122){
        cout<<"it is lowercase";
    if (ascii>=65 && ascii<=90) {
        cout<<"it is uppercase";
    }    
    }

}