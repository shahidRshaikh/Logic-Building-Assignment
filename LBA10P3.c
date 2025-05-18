// write a program which accept number from user and return the count of digits in between 3 and 7

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA10P3.c
//  Description :   Accept number from user and return the count of Digits Between 3 and 7
//  Author :        Omkar Santosh Wagh
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

        if(iNo < 0)
    {
        iNo = -iNo;
    }

    iDigit = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit > 3) &&  (iDigit < 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count of Digits in Between 3 and 7 is : %d \n",iRet);

    return 0;

}