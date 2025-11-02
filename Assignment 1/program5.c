#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool Chkvowel(char cValue)
{
    if((cValue == 'a' )||(cValue == 'e' ) || (cValue == 'i' ) || (cValue == 'o' )|| (cValue == 'u' ))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet=Chkvowel(cValue);


    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    return 0;
}