void main()
{
int yr;
printf("enter year to scan");
scanf("%d",&yr);
(yr%4==0) ? (yr%100!=0? printf("The year %d is a leap year",yr) : (yr%400==0 ? printf("The year %d is a leap year",yr) : printf("The year %d is not a leap year",yr))) 
             : printf("The year %d is not a leap year",yr); 
}