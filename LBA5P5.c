// Write a program which accept N and Print first 5 multiples of N

/////////////////////////////////////////////////////////////////////////////////
//  
//  File Name :     LBA5P5.c
//  Description :   accept N and Print first 5 multiples of N
//  Author :        Omkar Santosh Wagh
//  Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        {
            printf("%d \t",iNo * iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
