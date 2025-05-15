// write a program which accept number from user and display all its non factors

/////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA4P4.c
//  Description :   used to calculate summation of all non factors
//  Author :        Omkar Santosh Wagh
//  Date :          13/05/2025
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet =0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of all Non factors is : %d \n",iRet);

    return 0;
}