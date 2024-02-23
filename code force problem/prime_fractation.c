/*       L. Prime factorization
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a positive integer n. Output its prime factorization.

If n = a1b1 a2b2 ... akbk (bi > 0), where ak are prime numbers, the output of your program should look as follows: a1*...*a1*a2*...*a2*...*ak*...*ak, where the factors are ordered in non-decreasing order, and each factor ai is printed bi times.

Input
The only line of input contains an integer n (2 = n = 10000).

Output
Output the prime factorization of n, as described above.

Examples
inputCopy
245
outputCopy
5*7*7
inputCopy
19
outputCopy
19
*/

#include<stdio.h>
int is_prime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        
           if(n%i==0 && is_prime(i)==1){
           printf("%d*",i);
           n=n/i;
        }
    }
    return 0;
}







