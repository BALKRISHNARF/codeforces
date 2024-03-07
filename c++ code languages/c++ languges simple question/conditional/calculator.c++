#include<iostream>
using namespace std;
int main(){
   int a,b;
   cout<<"enter the nember";
   cin>>a>>b;
   cout<<"Enter the operator";
   char operator;
   cin>>operator;
   switch (operator){
        case '+': 
            cout<<"sum is:"<<a+b<<endl;
            break;
        case '-':
            cout<<"sub is:"<<a-b<<endl;
            break;
        default :
            cout<<"invalid operator"<<endl;    

   }  
   
   return 0;

}