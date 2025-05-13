// Accept two numbers from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf(" %d \t",iNo);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Fisrt number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}