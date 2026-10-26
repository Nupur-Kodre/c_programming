//input : 2024      ->Leap year
//input : 1900      ->Not a Leap year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid year\n");
    }
    else if((iNo % 4) == 0)
    {
        printf("Leap year\n");
    }
    else if((iNo % 400) == 0)
    {
        printf("Leap year\n");
    }
    else if((iNo % 100) == 0)
    {
        printf("Not a Leap year\n");
    }
    else
    {
        printf("Not a Leap year\n");
    }
    
}
int main()
{
    int iYear = 0;

    printf("Enter Year : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}