///////////////////////////////////////////////////////////////////////////
//
//Function : Number
//Description : It is used to  Display whether the number lies under medium, small or large range 
//Input : integer
//Output : string
//Author : Nupur Sunil Kodre
//Date : 01/11/2026
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Number(int iNo)
{

    if(iNo < 50)
    {
        printf("Small\n");
    }
    if((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    if(iNo > 100)
    {
        printf("Large\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}