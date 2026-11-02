///////////////////////////////////////////////////////////////////////////
//
//Function :DollarToINR
//Description : It is used to return amount in Indian currency, input is given in US dollar
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo > 0)
    {
        iDollar = iNo * 70;
    }
    return iDollar;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d\n",iRet);

    return 0;
}