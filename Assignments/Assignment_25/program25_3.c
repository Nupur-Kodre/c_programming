///////////////////////////////////////////////////////////////////////////
//
//Function : ChkDigit
//Description : It is used to accept character from user and check whether it is digit or not
//Input : integer
//Output : string
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkDigit(char ch)
{
    if(((ch >= '0') && (ch <= '9')))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit ");
    }
    else
    {
        printf("It is not Digit ");
    }

    return 0;
}