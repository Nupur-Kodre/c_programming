//input = 10    20      output: 10 is greater
//input = 50    30      output: 50 is greater
//input = 15    15      output: both number are equal

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is greater",iNo1);
    }
    else if(iNo1 < iNo2)
    {
        printf("%d is greater",iNo2);
    }
    else
    {
        printf("Both are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers : \n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}


