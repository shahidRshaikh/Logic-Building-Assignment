// write a program which accept number from user and return the Multiplication of all digits

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA10P4.c
//  Description :   Accept number from user and return the Multiplication of All Digits
//  Author :        Omkar Santosh Wagh
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

        if(iNo < 0)
    {
        iNo = -iNo;
    }

    iDigit = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
             iMulti = iMulti * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMulti;
 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("Multiplication of Digits is : %d \n",iRet);

    return 0;

}