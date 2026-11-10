////////////////////////////////////////
// 
// Function Name : FactRev
// Description : To display the factors of a number in decreasing order
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 10/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo - 1; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);


    return EXIT_SUCCESS;
}