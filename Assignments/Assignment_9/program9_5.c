///////////////////////////////////////////////////////////////////////////
//
//Function :FactorialDiff
//Description : It is used to give difference between even and odd factorial
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;
    int iFactDiff = 0;

    for(iCnt = iNo; iCnt >= 2; iCnt--)          //Even Factorial
    {
       if((iCnt % 2) == 0)
       {
          iFactEven = iFactEven * iCnt;
          
       } 
    }

    for(iCnt = iNo; iCnt >= 2; iCnt--)          // Odd Factorial
    {
       if((iCnt % 2) != 0)
       {
          iFactOdd = iFactOdd * iCnt;
          
       } 
    }
    
    iFactDiff = iFactEven - iFactOdd;           // Difference
    
    return iFactDiff;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Even Factorial of number is : %d\n",iRet);

    return 0;
}