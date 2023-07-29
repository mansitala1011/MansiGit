#include<stdio.h>
int main()
{
   int i,j,k;
   printf("Enter sides of triangle:\n");
   scanf("%d %d %d",&i,&j,&k);
   
   
   if(i==j && j==k)
   {
      printf("The Given Triangle is equilateral");
   }
   else if(i==j , j==k , k==i)
   {
      printf("The given Triangle is isosceles");
   }
   else
   {
      printf("The given Triangle is scalene");
   } 
   return 0;
}