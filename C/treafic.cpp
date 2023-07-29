#include<stdio.h>
int main(void)
{
	char colour;
	printf("enter any colour:\n");
	scanf("%c",&colour);
	
	if(colour=='r')
	{
		printf("stop vehicle\n");
	}
    else if(colour=='y')
	{
		printf("stop and then go\n");
	}
    else if(colour=='g')
	{
		printf("you can go\n");
	}
	else
	{
		printf("invalid colour\n");
	}
}