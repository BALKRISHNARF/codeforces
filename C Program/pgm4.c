#include<stdio.h>
void main()
{
	float a,b,c;
	float avg;
	printf("Enter the value of a");
	scanf("%f",&a);
	printf("Enter the value of b");
	scanf("%f",&b);
	printf("Enter the value of c");
	scanf("%f",&c);
	avg=(a+b+c)/3;
	printf("Avg:%f",avg);
	
	if((a==b)&&(b==c)&&(a==c))
	{
		printf("all scores are equal");
	}
	
	if((a==b||a==c)||(b==c||b==c)||((c==a)||(c==b)))
	{
		printf("\ntwo marks have same score");
	}
	if(a>b&&a>c)
	{
	printf("\n%f is greater",a);
	}
	
	if(b>a&&b>c)	
	
	{
		printf("\n%f is greater",b);		
	}
	
    if(c>a&&c>b)	
	
	{
		printf("\n%f is greater",c);
			
	}

       	
}
	