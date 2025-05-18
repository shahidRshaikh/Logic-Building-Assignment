// write a program which accept distance in kilometre and convert into metre

////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA8P3.c
//  Description :   convert kilometre into metre
//  Athor :         Omkar Santosh Wagh
//  Date :          15/05/2025
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define METRE 1000

int KmToMetre(int iNo)
{
    int iConvert = 0;

    iConvert = iNo * METRE;

    return iConvert;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometre : \n");
    scanf("%d",&iValue);

    iRet = KmToMetre(iValue);

    printf(" %d Kilometre = %d Metre \n",iValue,iRet);

    return 0;
}