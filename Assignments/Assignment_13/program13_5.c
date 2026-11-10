///////////////////////////////////////
// 
// Function Name : CountDiff
// Description : To display the difference between sum of even digits and odd digits
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 10/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0 , iSumE = 0, iSumO = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumO = iSumO + iDigit;
        }
        
        iNo = iNo / 10;
    }

    iDiff = iSumE - iSumO;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("The difference is : %d",iRet);

    return EXIT_SUCCESS;
}