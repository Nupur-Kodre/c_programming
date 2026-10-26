//input = 15        output = positive number
//input = -8        output = negative number
//input = 0         output = Zero

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive number\n");
    }
    else if(iNo < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
