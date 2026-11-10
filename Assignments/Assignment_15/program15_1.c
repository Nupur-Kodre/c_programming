///////////////////////////////////////////////////////////////////////////
//
//Function : main
//Description : It is used to accept name from user and print that name
//Input : string
//Output : string
//Author : Nupur Sunil Kodre
//Date : 04/11/2026
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter your full name : ");
    scanf("%[^'\n']s",&Name);

    printf("Your name is : %s",Name);

    return 0;
}