////////////////////////////////////////////////////////////////////////////
//
//Function : Check Admission Eligibility
//Description : It is used to Check Admission Eligibility
//Input : integer, float
//Output : String
//Author : Nupur Sunil Kodre
//Date : 22/10/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
    if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age : \n");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}