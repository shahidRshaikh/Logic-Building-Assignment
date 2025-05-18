// write a program which accept number from user and check wheather it contains 0

//////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA9P2.c
//  Description :   Accept number from user and check wheather it contains 0
//  Author :        Omkar Santosh Wagh
//  Date :          15/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

        if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return true ;
        }
          iNo = iNo / 10;
    }
         return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero \n");
    }
    else
    {
        printf("There is No Zero \n");
    }

    return 0;
}