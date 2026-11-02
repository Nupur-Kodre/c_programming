///////////////////////////////////////////////////////////////////////////
//
//Function :Table
//Description : It is used to  Display Table of number in reverse order
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iTable = 1;
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTable = iNo * iCnt;
        printf("%d\t",iTable);
    }
   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}