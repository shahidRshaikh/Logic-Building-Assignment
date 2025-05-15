// write a  program to find factorial of given number

/////////////////////////////////////////////////////////////////////////
//
//  File Namne :   LBA6P3.c
//  Description :  write a  program to find factorial of given number
//  Author :       Omkar Santosh Wagh
//  Date :         14/05/2025
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMulti = iMulti * iCnt;
    }

    return iMulti;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d : %d \n",iValue,iRet);

    return 0;
}