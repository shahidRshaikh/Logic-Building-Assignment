// write a program which accpet number from user and return diffrence between summation of all its factors and non factors

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA4P5.c
//  Description :   used to calculate Diffence between summation of all factors and non factors
//  Author :        Omkar Santosh Wagh
//  Date :          13/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iDifference = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            if((iNo % iCnt) != 0)
            {
                iSum2 = iSum2 + iCnt;
            }
        }
            iDifference = iSum1 - iSum2;
    }

    return iDifference;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference Betwen summation of all its factors and non factors is : %d\n",iRet);

    return 0;
}