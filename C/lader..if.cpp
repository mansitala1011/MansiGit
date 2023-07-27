#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks\n");
	scanf("%d",&marks);
	
	if(marks>=100)
	{
		printf("distinction");
	}
	else if(marks>=90)
	{
		printf("first class");
	}
	else if(marks>=80)
	{
		printf("second class");
	}
	else if(marks>=70)
	{
		printf("pass class");
	}
	else if(marks>=60)
	{
		printf("fail");
	}
	return 0;
}