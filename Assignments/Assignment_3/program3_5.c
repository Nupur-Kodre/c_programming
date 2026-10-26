//input : E     output : TRUE
//input : d     output : FALSE

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if((CValue == 'a') || (CValue == 'A') ||
       (CValue == 'e') || (CValue == 'E') ||
       (CValue == 'i') || (CValue == 'I') || 
       (CValue == 'o') || (CValue == 'O') || 
       (CValue == 'u') || (CValue == 'U') )
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

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }

    return 0;
}