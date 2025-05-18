// write a program which accept area in square meter and convert it into square meter

////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA8P4.c
//  Description :   convert square feet into square meter
//  Athor :         Omkar Santosh Wagh
//  Date :          15/05/2025
//
////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#define SQUARE_FEET 0.0929

double SquareMeter(int iNo)
{
    double dConvert = 0.0;
    dConvert = iNo * SQUARE_FEET; 

    return dConvert;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Meter : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf(" %d Squarefeet =  %lf Square meter \n",iValue,dRet);

    return 0;
}