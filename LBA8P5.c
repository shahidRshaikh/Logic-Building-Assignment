// write a program which accept tempreture in Fahrenheit and convert it into celcius

////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA8P5.c
//  Description :   To calculate Fahrenheit tempreture into celsius
//  Athor :         Omkar Santosh Wagh
//  Date :          15/05/2025
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhToCs(int iTemp)
{
    double dConvert = 0.0;

    dConvert = ((iTemp - 32) * (5.0/9.0));

    return dConvert;

}

int main()
{
    int iValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreture in Fahrenheit : \n");
    scanf("%d",&iValue);

    dRet = FhToCs(iValue);

    printf("%d Fehrenheit = %lf Celcius \n",iValue,dRet);

    return 0;
}