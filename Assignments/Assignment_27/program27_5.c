///////////////////////////////////////////////////////////////////////////
//
//Function : Reverse
//Description : It is used to reverse the string
//Input : string
//Output : string
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>  

void Reverse(char *str)
{
   char temp;
   char *start = str;
   char *end = str;

   while(*end != '\0')
   {
        end++;
   }
   
   end--;

   while(start < end)
   {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
   }
    
}
int main()
{
    char arr[20];
   
    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}