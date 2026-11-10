///////////////////////////////////////////////////////////////////////////
//
//Function : Percentage
//Description : It is used to accept total marks and obtained marks from user and give percentage
//Input : integer
//Output : float
//Author : Nupur Sunil Kodre
//Date : 10/11/2026
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

float Percentage(int iTotal, int iObtain)
{
    float fPercent = 0.0f;
    fPercent = (((float)iObtain / iTotal) * 100);
    return fPercent;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %05.1f%%",fRet);

    return 0;
}