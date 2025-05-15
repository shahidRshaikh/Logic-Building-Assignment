// Accept amount in US doollor and return its corresponding value in indian currency. consider 1$ as 70 Rupees.

//////////////////////////////////////////////////////////////////////////
//  
//  File Name :   LBA7P2.c
//  Description : Accept amount in US doollor and return indian currency
//  Author :      Omkar Santosh Wagh
//  Date :        14/05/2025
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollorToINR(int iNo)
{
    int iCurrency = 0;
    int iRupees = 70;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iCurrency = iNo * iRupees;

    return iCurrency;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of USD : \n");
    scanf("%d",&iValue);

    iRet = DollorToINR(iValue);

    printf("Value in INR is %d \n",iRet);

    return 0;
}