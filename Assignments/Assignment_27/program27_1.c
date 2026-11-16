///////////////////////////////////////////////////////////////////////////
//
//Function : CountCapital
//Description : It is used to count capital characters
//Input : character
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(arr);

    printf("Frequency of character is : %d",iRet);

    return 0;
}