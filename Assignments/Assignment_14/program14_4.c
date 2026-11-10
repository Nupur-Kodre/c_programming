////////////////////////////////////////
// 
// Function Name :SumNonFact
// Description : To display the sum of all non factors of a number 
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 10/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}