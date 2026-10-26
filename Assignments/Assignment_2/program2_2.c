#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         //updater
    {
        iNo = -iNo;
    }

    iCnt = iNo;

    while(iCnt >= 1)            //decreasing order
    {
        printf("*\n");
        iCnt--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}