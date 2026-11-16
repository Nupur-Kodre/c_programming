///////////////////////////////////////////////////////////////////////////
//
//Function : CountSmall
//Description : It is used to count Small characters
//Input : character
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Frequency of character is : %d",iRet);

    return 0;
}