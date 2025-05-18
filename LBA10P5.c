// write a program which accept number from user and return difference between summation of even digits and summation of odd digits

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA10P5.c
//  Description :   Accept number from user and return the difference between summation of even digits and summation of odd digits
//  Author :        Omkar Santosh Wagh
//  Date :          16/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDifference(int iNo)
{
    int iDigit = 0;
    int iEvenAdd = 0;
    int iOddAdd = 0;
    int iSummation = 0;

        if(iNo < 0)
    {
        iNo = -iNo;
    }

    iDigit = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iEvenAdd = iEvenAdd + iDigit;
        }
        else if((iDigit % 2) != 0)
        {
            iOddAdd = iOddAdd + iDigit;
        }
        iNo = iNo / 10;
    }

        iSummation = iEvenAdd - iOddAdd;

    return iSummation;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountDifference(iValue);

    printf("Difference between summation of even and odd digits is : %d \n",iRet);

    return 0;

}