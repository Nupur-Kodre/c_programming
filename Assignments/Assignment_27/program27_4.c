///////////////////////////////////////////////////////////////////////////
//
//Function : ChkVowel
//Description : It is used to check whether the string contains vowels
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

int ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a') ||
           (*str == 'E') || (*str == 'e') ||
           (*str == 'I') || (*str == 'i') ||
           (*str == 'O') || (*str == 'o') ||
           (*str == 'U') || (*str == 'u'))
        {
            return TRUE;
        } 
            
        str++;

    }

    return FALSE;
    
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("There are no Vowels");
    }
   

    return 0;
}