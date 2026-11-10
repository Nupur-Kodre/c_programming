////////////////////////////////////////
// 
// Function Name : CountRange
// Description : To count the number of digits between 3 and 7
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 10/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0 , iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit >= 3) && (iDigit <= 7))
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

    iRet = CountRange(iValue);

    printf("The count of digits between 3 and 7 are : %d",iRet);

    return EXIT_SUCCESS;
}