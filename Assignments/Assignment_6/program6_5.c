////////////////////////////////////////////////////////////////////////////
//
//Function : Calculate Bonus
//Description : It is used to  Calculate Bonus
//Input : int, float
//Output : float
//Author : Nupur Sunil Kodre
//Date : 22/10/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;
    
    if((fSalary <= 0) || (iYears <= 0))
    {
        printf("Invalid salary or years of experience");
    }
    else if(iYears >= 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if((iYears >= 5) && (iYears < 10))
    {
        fBonus = fSalary * 0.10f;
    }
    else if(iYears < 5)
    {
        fBonus = fSalary * 0.05f;
    }
    printf("Bonus : %f",fBonus);


}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of experience\n");
    scanf("%f %d",&fSalary, &iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}