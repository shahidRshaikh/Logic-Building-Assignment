// write a program which Accepts number from user and print its number line

///////////////////////////////////////////////////////////////////////
//  
//  File Name :     LBA5P3.c
//  Description :   Accepts number from user and print its number line
//  Author :        Omkar Santosh Wagh
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}