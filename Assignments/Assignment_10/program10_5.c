///////////////////////////////////////////////////////////////////////////
//
//Function : SquareMeter
//Description : It is used to convert area in square feet into square meter
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iSqrfeet)
{
    double dMeter = 0.0;

    dMeter = iSqrfeet * 0.0929;

    return dMeter;
}
int main()
{
    int iValue = 0;
    
    double dRet = 0.0;

    printf("Enter area : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Distance in square meters is : %lf\n",dRet);

    return 0;
}