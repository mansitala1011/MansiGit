#include<stdio.h>
int main()
{
	for(int i=0;i<=8;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf(" %d ",j%2);
		}
		printf("\n");
	}
}