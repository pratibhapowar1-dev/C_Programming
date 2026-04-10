#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 1;
    while( iCnt<=5)
    {
        printf("*\t",iCnt);
        iCnt++;
    }
    
    printf("\n");
}
int main()
{
    Display();

    return 0;
}