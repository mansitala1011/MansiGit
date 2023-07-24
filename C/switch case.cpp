#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks");
	scanf("%d" ,&marks);
	switch(marks/10)
	{
		case 10:
		printf("A++");
		break;
			
		case 9:
		printf("A+");
		break;
				
		case 8:
		printf("A");
		break;
					
		default:
		printf("invalid");
		break;
	}
}