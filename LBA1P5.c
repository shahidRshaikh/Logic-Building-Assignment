// print 5 times * on screen

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("* \t");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Display();

    return 0;
}