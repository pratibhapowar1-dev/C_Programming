#include<stdio.h>

void Display(int iFrequancy)
{
    int iCnt = 0;

      //filter
       if(iFrequancy < 0)
       {
         printf("Invalid input\n");
         return;
         
       }
    
    for(iCnt = 1; iCnt<=iFrequancy; iCnt++)
    {
        printf("Jay Ganesh\n");
    }
    
}

int main()
{
    int iCount = 0;

    printf("Enter the number : \n ");
    scanf("%d",&iCount);

    Display(iCount);
    
    return 0;
}