// write a program which accept number from user and count frequency of such a digits which is less than 6

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA9P5.c
//  Description :   Accept number from user and check frequency of digits which less than 6
//  Author :        Omkar Santosh Wagh
//  Date :          16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CountTwo(int iNo)
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

        if(iDigit < 6)
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

    iRet = CountTwo(iValue);

    printf(" Frequency of Digits whic less than 6 is : %d \n",iRet);

    return 0;

}