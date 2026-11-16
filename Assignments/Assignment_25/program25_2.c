///////////////////////////////////////////////////////////////////////////
//
//Function : ChkCapital
//Description : It is used to accept character from user and check whether it is character is capital or not
//Input : character
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

BOOL ChkCapital(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not Capital Character");
    }

    return 0;
}