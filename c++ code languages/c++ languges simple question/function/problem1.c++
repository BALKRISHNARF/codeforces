//#Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;
int square_of_count(int c){
    return c*c;
}
int count_of_digit(int x){
    int ans = 0;
    while(x>0){
        ans++;
        x/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a = count_of_digit(n);
    cout<<square_of_count(a)<<endl;

}