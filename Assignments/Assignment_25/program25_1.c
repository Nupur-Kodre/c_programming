///////////////////////////////////////////////////////////////////////////
//
//Function : ChkAlpha
//Description : It is used to accept character from user and check whether it is character or not
//Input : string
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

BOOL ChkAlpha(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not character");
    }

    return 0;
}