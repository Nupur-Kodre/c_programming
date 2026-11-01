////////////////////////////////////////////////////////////////////////////
//
//Function : Pattern
//Description : It is used to  print Pattern
//Input : int
//Output : Pattern
//Author : Nupur Sunil Kodre
//Date : 01/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt  = 1;iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }

    printf("\n");
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}