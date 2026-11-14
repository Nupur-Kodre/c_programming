///////////////////////////////////////////////////////////////////////////
//
//Function : struprx
//Description : It is used to accept string from user and convert it into upper case
//Input : string
//Output : string
//Author : Nupur Sunil Kodre
//Date : 14/11/2026
//
////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
    
}
int main()
{
    char arr[20];
   

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    printf("Modified string is  : %s\n",arr);

    return 0;
}