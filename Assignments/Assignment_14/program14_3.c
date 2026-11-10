////////////////////////////////////////
// 
// Function Name : NonFact
// Description : To display the non factors of a number 
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 10/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    NonFact(iValue);


    return EXIT_SUCCESS;
}