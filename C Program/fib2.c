 #include<stdio.h>    
int Fib(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (Fib(n-1) + Fib(n-2));
   }
}    
 
int main()
{    
    int n,res=0;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    for(int i = 0;i<n;i++) {
      printf("%d,",Fib(i)); 
	  res+=Fib(i);           
   }    
     
    printf("added res of fibseries:%d",res);
  return 0;  
 } 