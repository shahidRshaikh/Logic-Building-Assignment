// write a program which accept number from user and display its multiplication of factors.

////////////////////////////////////////////////////////////////////////////// 
//  
//  File Name :      LBA4P1.c
//  Description :    used to display its multiplication of factors
//  Author :         Omkar Santosh Wagh
//  Date :           13/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{   
    int iCnt = 0;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt ++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Factors Multiplication is : %d  \n",iRet);

    return 0;
}