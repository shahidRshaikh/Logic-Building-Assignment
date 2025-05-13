// Accept number from user and check wheather number is even or odd.

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{

    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   int iValue = 0;
   bool bRet = false;
   
   printf("Enter Number : \n");
   scanf("%d",&iValue);

   bRet = CheckEven(iValue);

   if(bRet == true)
   {
    printf("Number is Even \n");
   }
   else
   {
    printf("Number is Odd \n");
   }


   return 0;
}