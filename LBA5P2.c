// write a program which accept from user and print numbers till that number

///////////////////////////////////////////////////////////////////////////////
//
//  File Name :    LBA5P2.c
//  Description :  Accept Number from user and print numbers tiil that number
//  Author :       Omkar Santosh wagh
//  Date :         14/05/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Entr the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}