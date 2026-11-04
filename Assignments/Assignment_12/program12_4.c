////////////////////////////////////////
// 
// Function Name : CountFour
// Description : To count the frequency of 4 in the given number
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 4/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Frequency of four is : %d",iRet);


    return EXIT_SUCCESS;
}