/*
Algorithem
START
        Accept first number as no1
        Accept second number as no2
        if input is nigetive then convert it into positive
        perform addition of no and no2
        Display the addition on screen     
STOP

*/

///////////////////////////////////////////////////////////////////////////////////
// Required header file
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function name : AdditionTwoNumbers        
//  Description :   It is use to perform addition  
//  input :         int, int  
//  output :        int
//  Author :        Pratibha Sagar Pawar
//  Date :          09/10/25 
//
////////////////////////////////////////////////////////////////////////////////

int AdditionTwoNumbers(
                       int iNo1,          // first input
                       int iNo2           // second input
                     )
{
    int iSum = 0;                         // to store the resulet   
  
    if(iNo1 < 0)                          // updater
    {
        iNo1  = -iNo1;
    }     
    
    if(iNo2<0)                            // updater
    {
        iNo2 =- iNo2;
    }
 
    iSum = iNo1+iNo2;                     // Business Logic
    return iSum;

}
///////////////////////////////////////////////////////////////////////////////
// End of AdditionTwoNumbes
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//  Entery point function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;        // to accept user input    

    int iRet =0;                         // to store the result

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iRet = AdditionTwoNumbers(iValue1,iValue2);  // function call

    printf("Addition is :%d\n",iRet);


    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
//  End of entry point function
////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//  Testcasess successfully handaled by the applications
//
//   Input 1 : 10        Input2 : 3          output : 13
//   Input 1 : -10       Input2 : 3          output : 13
//   Input 1 : 10        Input2 : -3         output : 13
//   Input 1 : -10       Input2 : -3         output : 13
//
///////////////////////////////////////////////////////////////////////////////
