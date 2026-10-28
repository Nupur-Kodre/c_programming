////////////////////////////////////////////////////////////////////////////
//
//Function : Calculate shopping discount
//Description : It is used to  Calculate shopping discount
//Input : float
//Output : float
//Author : Nupur Sunil Kodre
//Date : 22/10/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount <= 0)
    {
        printf("Invalid purchase amount\n");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if((fAmount >= 1000) && (fAmount < 5000))
    {
        fDiscount = 0.10f;
    }
    else if(fAmount >= 5000)
    {
        fDiscount = 0.20f;
    }
    fFinalAmount = fAmount - (fAmount*fDiscount);

    printf("Payable Amount : %f",fFinalAmount);
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}