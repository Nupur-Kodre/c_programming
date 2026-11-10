////////////////////////////////////////
// 
// Function Name : NonFact
// Description : To return the Difference between summation of factors and non factors
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 10/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return (iSumFact - iSumNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);


    return EXIT_SUCCESS;
}