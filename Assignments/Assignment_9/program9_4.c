///////////////////////////////////////////////////////////////////////////
//
//Function :OddFactorial
//Description : It is used to  Display Odd factorials of given number
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iFact = 1;

    for(iCnt = iNo; iCnt >= 2; iCnt--)
    {
       if((iCnt % 2) != 0)
       {
          iFact = iFact * iCnt;
          
       } 
    }
    return iFact;
    
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is : %d\n",iRet);

    return 0;
}