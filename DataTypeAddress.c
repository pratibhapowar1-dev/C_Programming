/////////////////////////////////////////////////////////////////////////////////////////
//
// Required Heder files
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayValues
// Description   : it is used display values 
// Input         : Intiger/character 
// Output        : Intiger
// Author        : Pratibha Sagar Pawar 
//    
////////////////////////////////////////////////////////////////////////////////////////////

void DisplayValues()
{
    char cValue = 'A';
    int iValue = 11;
    float fValue = 21.4558f;
    double dValue = 51.945123532;

    printf("%c\n",cValue);
    printf("%d\n",iValue);
    printf("%f\n",fValue);
    printf("%lf\n",dValue);

    printf("Size of cValue is : %lu\n ", sizeof(cValue));
    printf("Size of iValue is : %lu\n ", sizeof(iValue));
    printf("Size of fValue is : %lu\n ", sizeof(fValue));
    printf("Size of dValue is : %lu\n ", sizeof(dValue));

    printf("Addess of cValue is : %lu\n",&cValue);
    printf("Addess of cValue is : %lu\n",&iValue);
    printf("Addess of cValue is : %lu\n",&fValue);
    printf("Addess of cValue is : %lu\n",&dValue);

}

///////////////////////////////////////////////////////////////////
//  Entry point function
//////////////////////////////////////////////////////////////////

int main()
{
    DisplayValues();
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
//  End of entry point function
///////////////////////////////////////////////////////////////////////////////