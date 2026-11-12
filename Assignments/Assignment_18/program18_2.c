///////////////////////////////////////////////////////////////////////////
//
//Function : Pattern
//Description : It is used to accept number of rows and columns and print pattern accordingly
//Input : integer
//Output : Pattern
//Author : Nupur Sunil Kodre
//Date : 12/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
   

    for(i = 1; i <= iRow; i++)
    {

        for(j = 1; j <= iCol; j++)
        {
            if(((i+j) == 6) || ((i+j) == 7) || ((i+j) == 8))
            {
                printf("#\t");
            }
            else
            {
                 printf("*\t");
            }
        }
        
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0; 
}