//input = 2         output = even number
//input = 7        output = odd number
//input = 0         output = Zero

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Even number\n");
    }
    else ((iNo % 2) != 0)
    {
        printf("Odd number\n");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
