///////////////////////////////////////////////////////////////////////////
//
//Function : strlwrx
//Description : It is used to accept string from user and convert it into lower case
//Input : string
//Output : string
//Author : Nupur Sunil Kodre
//Date : 14/11/2026
//
////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}
int main()
{
    char arr[20];
   

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified string is  : %s\n",arr);

    return 0;
}