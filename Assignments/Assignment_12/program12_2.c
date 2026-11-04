////////////////////////////////////////
// 
// Function Name : ChkZero
// Description : To check whether the number contains 0 in it or not
// Input : Integer
// Output : Boolean
// Author : Nupur Sunil Kodre
// Date : 4/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
           return TRUE;
        }
       
        
        iNo = iNo / 10;
    }

    return FALSE;

    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;


    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }


    return EXIT_SUCCESS;
}