////////////////////////////////////////////////////////////////////////////
//
//Function : Check Valid Triangle
//Description : It is used to  Check Valid Triangle
//Input : int
//Output : String
//Author : Nupur Sunil Kodre
//Date : 22/10/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckTriamgle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 < 0) || (iSide2 < 0) || (iSide3 < 0))
    {
        printf("Invalid Input\n");
    }
    else if(((iSide1 + iSide2) > iSide3) && ((iSide1 + iSide3) > iSide2) && ((iSide2 + iSide3) > iSide1))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}
int main()
{
    int iSide1 = 0;
    int iSide2 = 0;
    int iSide3 = 0;

    printf("Enter three Sides : \n");
    scanf("%d %d %d",&iSide1, &iSide2, &iSide3);

    CheckTriamgle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}