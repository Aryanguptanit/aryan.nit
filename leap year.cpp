#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,t;
	printf("enter a year");
	scanf("%d",&x);
	if(x%4==0&&(x%100!=0 ||x%400==0))
		printf("it is a leap year");
	else
		printf("it is not a leap year");  
    return 0;
} 
