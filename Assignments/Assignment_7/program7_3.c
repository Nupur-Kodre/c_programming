////////////////////////////////////////////////////////////////////////////
//
//Function : Display
//Description : It is used to  Display numbers of number line
//Input : int
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 01/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    

    for(iCnt  = -iNo;iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}