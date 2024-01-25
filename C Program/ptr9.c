void main()
{
	int a[]={1,2,3,4};
	
	int *p,*q;
	p=a;
	q=&a;
	printf("%d\n",*(p+2));
	printf("%d\n",*(q+3));
}