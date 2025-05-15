// write a program which returns difference between Even factorial and odd Factorial of given number.

//////////////////////////////////////////////////////////////////////////////
//  
//  File Name :   LBA7P5.c
//  Description : program to find difference between Even and Odd Factorial
//  Author :      Omkar Santosh Wagh
//  Date :        15/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt = 0;
   int iMulti1 = 1;
   int iMulti2 = 1;
   int iDifference = 0;

       if (iNo < 0)
    {
        iNo = -iNo;
    }

   for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iMulti1 = iMulti1 * iCnt;
        }
        else if((iCnt % 2) != 0)
        {
            iMulti2 = iMulti2 * iCnt;
        }
    }
        iDifference = iMulti1 - iMulti2;

        return iDifference;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Factorial Difference is : %d \n",iRet);

    return 0;
}