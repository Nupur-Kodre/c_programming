///////////////////////////////////////////////////////////////////////////
//
//Function : RangeDisplayEven
//Description : It is used to display even numbers between that range
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 04/11/2026
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt %2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;

}