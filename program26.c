#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{
   if(iNo1 % iNo2 == 0)
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
    int iValue1 = 0, iValue2;
    bool bRet = false;

    printf("Enter the first number :\n ");
    scanf("%d",&iValue1);

    printf("Enter the second number :\n ");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Is a completely  Divisible number \n");
    }
    else
    {
        printf("is not a divisible number \n");
    }
    
    return 0;

}