//input : 10    50      30   output: 50 is greatest
//input : 40    40      20   output: 40 is greatest
//input : 15    15      15   output: 15 is greatest

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iNo1, int iNo2,int iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        printf("%d is greatest",iNo1);
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        printf("%d is greatest",iNo2);
    }
    else if((iNo3 >= iNo1) && (iNo3 >= iNo2))
    {
        printf("%d is greatest",iNo3);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;


    printf("Enter three numbers : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}