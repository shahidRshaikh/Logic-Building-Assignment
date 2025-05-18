// write a program which accept number from user and display its digit in reverse order.

//////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA9P1.c
//  Description :   Accept number from user and display its digitd in reverse
//  Author :        Omkar Santosh Wagh
//  Date :          15/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}