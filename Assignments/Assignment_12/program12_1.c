////////////////////////////////////////
// 
// Function Name : DisplayDigit
// Description : To display the digits in reverse order
// Input : Integer
// Output : Integer
// Author : Nupur Sunil Kodre
// Date : 4/11/26
//
///////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\n",iDigit);
        
        iNo = iNo / 10;
    }

    
}

int main()
{
    int iValue = 0;


    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);


    return EXIT_SUCCESS;
}