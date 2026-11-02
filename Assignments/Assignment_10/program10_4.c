///////////////////////////////////////////////////////////////////////////
//
//Function : FhtoCs
//Description : It is used to convert temperature in Fahrenheit into celcius
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = (fTemp - 32) * (5.0/9.0);

    return dCelcius;
}
int main()
{
    float fValue = 0.0f;
    
    double dRet = 0.0;

    printf("Enter temperature : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celcius is : %lf\n",dRet);

    return 0;
}