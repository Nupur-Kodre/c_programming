////////////////////////////////////////
// 
// Function Name : CountEvenDigits
// Description : To count the number of even digits
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 10/11/26
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0 , iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("The no of even digits are : %d",iRet);

    return EXIT_SUCCESS;
}