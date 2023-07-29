#include<stdio.h>
int main()
 
{
    char later;
    printf("enter any later:\n");
    scanf("%f",&later);
    
    if (later=='a',later=='e',later=='i',later=='o',later=='u') 
	{
        printf("The character %c is a vowel.\n", later);
    } 
	else
    {
        printf("The character %c is a consonant.\n", later);
    }

    return 0;
}