void main()
{
	int x=10,y=20;
	int *p,*q,res;
	p=&x;
	q=&y;
    res=*p+*q;
	
	printf("\nvalue of res is %d",res);
}