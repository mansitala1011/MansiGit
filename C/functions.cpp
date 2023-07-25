#include<stdio.h>

float add(float a,float b)
{
	return a+b;
}
float sub(float a,float b)
{
	return a-b;
}
float mul(float a,float b)
{
	return a*b;
}
float div(float a,float b)  
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}

main()
{

        int choice;
        printf("enetr your choice:\n");
        scanf("%d",&choice);
        
        
        float num1,num2;
        printf("enter a 2 numbers");
        scanf("%f %f",&num1,&num2);
        
        
        if (choice==1)
        {
        	printf("add is :%f",add (num1,num2));
		}
		else if(choice==2)
		{
			printf("sub id :%f",sub (num1,num2));
		}
		else if(choice==3)
		{
			printf("mul id :%f",mul (num1,num2));
		}
		else if(choice==4)
		{
			printf("div id :%f",div (num1,num2));
		}
		else if(choice==5)
		{
			printf("mod id :%f",mod (num1,num2));
		}
		
}





