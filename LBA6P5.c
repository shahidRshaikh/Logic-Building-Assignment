// write a program which accept number from user and display its table in reverse order

/////////////////////////////////////////////////////////////////////////////
//
//  File Namne :   LBA6P5.c
//  Description :  accept number from user and display its table in reverse.
//  Author :       Omkar Santosh Wagh
//  Date :         14/05/2025
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMulti = 1;
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TablRev(iValue);

    return 0;
}