#include<stdio.h>
void main()
{
arraydemo1();
printf("\n***********--************");
arraydemo2();
printf("\n***********--************");
arraydemo3();
	

}

void arraydemo1()
{
		int x=1,y=2;
	int a[4]={x!=0,x<y,++x,x++};
	printf("%d\n%d\n%d\n%d",a[0],a[1],a[2],a[3]);
}

void arraydemo2()
{
	int m=1,n=2;
	int a[4]={1,2,3,4};
	printf("\n%d\n%d\n%d",m,n,a[m+=n]);
	
}

void arraydemo3()
{
	int m=1,n=2;
	int a[]={n+=2,m+=1,m+=n};
	printf("\n%d\n%d\n%d\n%d\n%d",a[0],a[1],a[2],m,n);
	
}
