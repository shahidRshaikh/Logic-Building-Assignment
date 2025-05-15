// write a program which Accepts N from user and print all odd numbers up to N.

/////////////////////////////////////////////////////////////////////////////////
//  
//  File Name :     LBA5P4.c
//  Description :   Accepts number from user and print all odd numbers up to n
//  Author :        Omkar Santosh Wagh
//  Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d \t",iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
