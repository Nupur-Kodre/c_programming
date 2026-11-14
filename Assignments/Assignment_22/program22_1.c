///////////////////////////////////////////////////////////////////////////
//
//Function : Pattern
//Description : It is used to accept number of elements and print characters accordingly
//Input : integer
//Output : Pattern
//Author : Nupur Sunil Kodre
//Date : 14/11/2026
//
////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}