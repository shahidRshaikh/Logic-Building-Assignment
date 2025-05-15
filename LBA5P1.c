// write a program which accept number from user and print that number of $ and * on screen

///////////////////////////////////////////////////////////////////////
//
// File Name :    LBA5P1.c
// Description :  used to Display $ and * on screen 
// Author :       Omkar Santosh Wagh
// Date :         14/05/2025
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
