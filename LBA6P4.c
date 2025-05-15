// write a program which accept number from user and display its table

/////////////////////////////////////////////////////////////////////////
//
//  File Namne :   LBA6P4.c
//  Description :  accept number from user and display its table
//  Author :       Omkar Santosh Wagh
//  Date :         14/05/2025
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMulti = 1;
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMulti = iNo * iCnt;
        printf("%d \t",iMulti);
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}