//Input : 7
//Output : 2    4   6   8   10  12  14

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    PrintEven(iNo - 1);         //Recursion

    printf("%d\t",iNo * 2);
}
int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}