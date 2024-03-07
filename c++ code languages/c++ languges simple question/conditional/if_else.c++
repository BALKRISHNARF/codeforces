#include<iostream>
using namespace std;
int main(){
    int score;
    cin>>score;
    if(score>=80){
        cout<<"Well done!"<<endl;
    }
    else if(score>50){
        cout<<"Can improve"<<endl;
    }

    return 0;
}