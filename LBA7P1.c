// write a program which accept number from and display below pattern
/*
    Input : 2
    Output : * * # #
*/

/////////////////////////////////////////////////////////////////////////////
//
//  File Namne :   LBA6P5.c
//  Description :  accept number from and display pattern
//  Author :       Omkar Santosh Wagh
//  Date :         14/05/2025
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt1 = 0;
    int iCnt2 = 0; 

    for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        printf("* \t");
    }

    for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
    {
        printf("# \t");
    }
    
}

int main()
{   
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}