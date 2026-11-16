///////////////////////////////////////////////////////////////////////////
//
//Function : DisplayASCII
//Description : It is used to display ASCII table
//Input : -
//Output : ASCII table
//Author : Nupur Sunil Kodre
//Date : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int i;

    printf("Decimal\t\tHexadecimal\tOctal\tCharacter\n");
    printf("----------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t\t%X\t\t%o\t\t%c\n",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();

    return 0;
}