/*. Minimum LCM
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
You are given an integer n
.

Your task is to find two positive (greater than 0
) integers a
 and b
 such that a+b=n
 and the least common multiple (LCM) of a
 and b
 is the minimum among all possible values of a
 and b
. If there are multiple answers, you can print any of them.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (2≤n≤109
).

Output
For each test case, print two positive integers a
 and b
 — the answer to the problem. If there are multiple answers, you can print any of them.

Example
inputCopy
4
2
9
5
10
outputCopy
1 1
3 6
1 4
5 5
Note
In the second example, there are 8
 possible pairs of a
 and b
:

a=1
, b=8
, LCM(1,8)=8
;
a=2
, b=7
, LCM(2,7)=14
;
a=3
, b=6
, LCM(3,6)=6
;
a=4
, b=5
, LCM(4,5)=20
;
a=5
, b=4
, LCM(5,4)=20
;
a=6
, b=3
, LCM(6,3)=6
;
a=7
, b=2
, LCM(7,2)=14
;
a=8
, b=1
, LCM(8,1)=8
.
In the third example, there are 5
 possible pairs of a
 and b
:

a=1
, b=4
, LCM(1,4)=4
;
a=2
, b=3
, LCM(2,3)=6
;
a=3
, b=2
, LCM(3,2)=6
;
a=4
, b=1
, LCM(4,1)=4
.
*/
#include<iostream>
typedef long long ll ;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        ll x=0;
        for(ll i=2;i<=sqrt(a);i++){
            if(a%i==0){
                x=a/i;
                break;
            }
            cout<<x<<" "<<a-x<<endl;
        }
    }
}