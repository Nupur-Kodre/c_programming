///////////////////////////////////////////////////////////////////////////
//
//Function : KMtoMeter
//Description : It is used to convert distance in KM into meters
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int KM)
{
    int iMeter = 0;

    iMeter = KM * 1000;

    return iMeter;
}
int main()
{
    int iValue = 0;
    
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is : %d\n",iRet);

    return 0;
}