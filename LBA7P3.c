// write a program to find even factorial of given number.

//////////////////////////////////////////////////////////////////////////
//  
//  File Name :   LBA7P3.c
//  Description : program to find even factorial of given number
//  Author :      Omkar Santosh Wagh
//  Date :        15/05/2025
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
   int iCnt = 0;
   int iMulti = 1;

       if (iNo < 0)
    {
        iNo = -iNo;
    }

   for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial is : %d \n",iRet);

    return 0;
}