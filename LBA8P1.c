// write a program which accept raduis of circle from user and calculate its area.

////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA8P1.c
//  Description :   To calculate area of cirle
//  Athor :         Omkar Santosh Wagh
//  Date :          15/05/2025
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    dArea = PI * fRadius * fRadius;

    return dArea;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %4.4lf \n",dRet);

    return 0;
}