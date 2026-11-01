////////////////////////////////////////////////////////////////////////////
//
//Function : Display
//Description : It is used to  Displaynumbers till given input number
//Input : int
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 01/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt  = 1;iCnt <= iNo; iCnt++)
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