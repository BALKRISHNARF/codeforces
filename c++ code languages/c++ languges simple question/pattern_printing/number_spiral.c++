
/*
                                                                                                              > cd "c:\Users\balkr\OneDrive\Desktop\codeforces\c++ code languages\c++ languges simple question\pattern_printing\" ; if ($?) { g++ number_spiral.c++ -o number_spiral } ; if ($?) { .\number_spiral }
4
4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/







#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 
    for(int i=1;i<=2*n-1;i++){
        for(int j =1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(a>n) a=2*n-i;
            if(b>n) b=2*n-j;
            int x = min(a,b);
            cout<<n-x+1;
        }
        cout<<endl;
    }
}
    