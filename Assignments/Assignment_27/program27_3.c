///////////////////////////////////////////////////////////////////////////
//
//Function : Difference
//Description : It is used to give difference between small characters and capital characters
//Input : character
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCapitalCount = 0;
    int iSmallCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCount++;
        }
        
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCount++;
        }
        str++;
    }

    return (iSmallCount - iCapitalCount);
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference of characters is : %d",iRet);

    return 0;
}