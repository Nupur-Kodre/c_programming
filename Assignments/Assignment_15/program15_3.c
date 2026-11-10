///////////////////////////////////////////////////////////////////////////
//
//Function : ChkEqual
//Description : It is used to accept two number from user and check they are equal or not
//Input : integer
//Output : string
//Author : Nupur Sunil Kodre
//Date : 04/11/2026
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iValue1, int iValue2)
{
    if(iValue1 == iValue2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter first number : ");
    scanf("%d",&iValue1);

    printf("Please enter second number : ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}