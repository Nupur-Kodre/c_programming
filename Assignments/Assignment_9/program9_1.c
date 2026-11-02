///////////////////////////////////////////////////////////////////////////
//
//Function :Display
//Description : It is used to  Display Pattern
//Input : integer
//Output : Pattern
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       
        printf("#\t");
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}