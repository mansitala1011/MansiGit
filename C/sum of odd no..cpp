#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter number of upper limits:\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("sum of odd numbers = %d",sum);
	
	return 0;
}