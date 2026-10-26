//input = 5         output = Divisible by 5
//input = 7         output = not divisible by 5

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else if((iNo % 5) != 0)
    {
        printf("Not Divisible by 5\n");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}