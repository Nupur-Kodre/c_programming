///////////////////////////////////////////////////////////////////////////
//
//Function : RangeDisplay
//Description : It is used to display numbers in between that range
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 04/11/2026
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
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

    RangeDisplay(iValue1,iValue2);

    return 0;

}