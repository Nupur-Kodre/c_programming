////////////////////////////////////////
// 
// Function Name : CountTwo
// Description : To count the frequency of 2 in the given number
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 4/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of two is : %d",iRet);


    return EXIT_SUCCESS;
}