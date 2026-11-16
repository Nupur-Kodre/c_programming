///////////////////////////////////////////////////////////////////////////
//
//Function :     Display
//Description : It is used to accept character from user and display its decimal, 
//              octal and hexadecimal value
//Input : character
//Output : character
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : O%o\n",ch);
    printf("Hexadecimal : OX%X\n",ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}