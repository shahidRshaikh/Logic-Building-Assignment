// write a program which accept number from user and return the count of Odd digits

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA10P2.c
//  Description :   Accept number from user and return the count of odd digits
//  Author :        Omkar Santosh Wagh
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

        if(iNo < 0)
    {
        iNo = -iNo;
    }

    iDigit = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Count of Odd Digits are : %d \n",iRet);

    return 0;

}