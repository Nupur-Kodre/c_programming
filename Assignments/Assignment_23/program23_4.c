///////////////////////////////////////////////////////////////////////////
//
//Function : DisplayDigit
//Description : It is used to accept string from user and display only digits from string
//Input : string
//Output : integers
//Author : Nupur Sunil Kodre
//Date : 14/11/2026
//
////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        
        str++;
    }
    
}
int main()
{
    char arr[20];
   
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
}