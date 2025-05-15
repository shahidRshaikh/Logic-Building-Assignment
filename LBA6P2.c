// Accept Single Digit number from user and print it into word

/////////////////////////////////////////////////////////////////////////
//
//  File Namne :   LBA6P2.c
//  Description :  Accept single digit from user and print it into word
//  Author :       Omkar Santosh Wagh
//  Date :         14/05/2025
//
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{

switch(iNo)
{
    case 1:
        printf("One \n");
    break;
    case 2:
        printf("Two \n");
    break;
    case 3:
        printf("Three \n");
    break;
    case 4:
        printf("Four \n");
    break;
    case 5:
        printf("Five \n");
    break;
    case 6:
        printf("Six \n");
    break;
    case 7: 
        printf("Seven \n");
    break;
    case 8:
        printf("Eight \n");
    break;
    case 9:
        printf("Nine \n");
    break;
    default:
        printf("Invalide Input \n");
    break;
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
