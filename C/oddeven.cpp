#include<stdio.h>
int main()
{
	int num;
	printf("enter any number:\n");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("number is odd");
	}
	else
	{
		printf("number is even");
	}
}