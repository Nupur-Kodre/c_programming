////////////////////////////////////////////////////////////////////////////
//
//Function : Calculate Electricity Bill
//Description : It is used to calculate electricity bill
//Input : integer
//Output : float
//Author : Nupur Sunil Kodre
//Date : 22/10/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("%f",fBill);
    }
    else if((iUnits >= 100) && (iUnits < 200))
    {
        fBill = iUnits * 7;
        printf("%f",fBill);
    }
    if(iUnits >= 200)
    {
        fBill = iUnits * 10;
        printf("%f",fBill);
    }
}
int main()
{
    int iUnits = 0;

    printf("Enter consumed units : \n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}