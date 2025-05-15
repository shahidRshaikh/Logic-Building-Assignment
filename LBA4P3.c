// write a program which accept number from user and display all its non factors

///////////////////////////////////////////////////////////////
// 
//  File Name :     LBA4P3.c
//  Description :   used to display all non factors
//  Author :        Omkar Santosh Wagh
//  Date :          13/05/2025
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d \n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

