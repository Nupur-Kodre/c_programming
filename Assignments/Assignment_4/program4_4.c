//input = 18          output: Eligible for voting
//input = 16          output: Not eligible for voting
//input = -5          output: Invalid age

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iNo)
{
    if(iNo >= 18)
    {
        printf("Eligible for Voting");
    }
    else if((iNo < 18) && (iNo > 0))
    {
        printf("Not Eligible for Voting");
    }
    else
    {
        printf("Invalid Age\n");
    }
}

int main()
{
    int iAge = 0;
   

    printf("Enter your Age: \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}