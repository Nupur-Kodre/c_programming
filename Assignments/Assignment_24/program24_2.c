///////////////////////////////////////////////////////////////////////////
//
//Function : CountChar
//Description : It is used to accept string from user and give frequency of given character
//Input : string
//Output : integers
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;

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

    iRet = CountChar(arr, cValue);

    printf("Character Frequency is : %d\n",iRet);

    return 0;
}