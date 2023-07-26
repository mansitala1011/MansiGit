#include<stdio.h>
int main()
{
	int year;
	printf("enetr an year:\n");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("leap year hai");
	}
	else
	{
		printf("leap year nhi hai");
	}
}