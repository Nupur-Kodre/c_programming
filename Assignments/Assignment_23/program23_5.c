///////////////////////////////////////////////////////////////////////////
//
//Function : CountWhite
//Description : It is used to accept string from user and give number of white spaces
//Input : string
//Output : integers
//Author : Nupur Sunil Kodre
//Date : 14/11/2026
//
////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
   
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}