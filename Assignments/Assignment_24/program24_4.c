///////////////////////////////////////////////////////////////////////////
//
//Function : LastChar
//Description : It is used to accept string from user and give last index of given character
//Input : string
//Output : integers
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iCount = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount = i;
        }
        i++;
        str++;
    }
    return iCount;

    if(*str != ch)
    {
        return -1;
    }
   
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}