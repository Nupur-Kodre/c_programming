///////////////////////////////////////////////////////////////////////////
//
//Function : RangeSum
//Description : It is used to display sum of numbers between that range
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 04/11/2026
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0 ) || (iEnd < 0) || (iStart > iEnd))
    {
        printf("Invalid range");
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    if(iRet != -1)
    {
    printf("Addition is : %d",iRet);
    }
    return 0;

}