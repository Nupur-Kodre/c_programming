///////////////////////////////////////////////////////////////////////////
//
//Function : RectArea
//Description : It is used to  Display Area of Rectangle
//Input : integer
//Output : integer
//Author : Nupur Sunil Kodre
//Date : 02/11/2026
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f; 
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %lf\n",dRet);

    return 0;
}