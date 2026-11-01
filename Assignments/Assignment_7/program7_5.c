///////////////////////////////////////////////////////////////////////////
//
//Function : MultipleDisplay
//Description : It is used to  Display 5 multiples of number 
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 01/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMultiple = 1;

    for(iCnt  = 1;iCnt <= 5; iCnt++)
    {
        iMultiple = iNo * iCnt;
        printf("%d\t",iMultiple);
        
    }

    printf("\n");
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}