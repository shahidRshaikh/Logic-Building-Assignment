/*
    write a program which accept number from user and if number is less than 50 then print small,
    if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large
*/

/////////////////////////////////////////////////////////////////////////
//
//  File Namne :   LBA6P1.c
//  Description :  
//  Author :       Omkar Santosh Wagh
//  Date :         14/05/2025
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalide Input \n");
    }

    else if(iNo < 50)
   {
    printf("small \n");
   } 
   else if((iNo > 50) && (iNo < 100))
   {
    printf("Medium \n");
   }
   else if(iNo > 100)
   {
    printf("Large \n");
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}