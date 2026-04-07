/*
Algorithem
START
      Accept first number as no1
      Accept second number as no2
      if input is nigative then convert it into positive
      perform addition of no1 and no2
      Display the Addition on screen
STOP

*/

///////////////////////////////////////////////////////////////////////////////
//
// Required Header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : AdditionTwoNumbers        
//  Description :   It is use to perform addition  
//  input :         Float, Float  
//  output :        Float  
//  Author :        Pratibha Sagar Pawar
//  Date :          09/10/25 
//
///////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                           float fNo1,               // First input 
                           float fNo2                // Second input
                        )
{
    float fsum = 0;                                  // to store the resulet   

    if(fNo1 < 0.0f)                                  // Updater
    {
        fNo1 = -fNo1;
    } 
    
    if(fNo2 < 0.0f)                                   // Updater
    {
        fNo2 = -fNo2;
    } 

    fsum = fNo1+fNo2;                                // Business logic
    return fsum;
}
//End of AdditionTwoNumbers

///////////////////////////////////////////////////////////////////////////////
//
//   Entery poit function for the application
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;     // to accept user input    

    float fRet =0.0f;                         // to store the result

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);  // function call

    printf("Addition is :%f\n",fRet);


    
    return 0;
   
}
////////////////////////////////////////////////////////////////////////////////
//End of main
////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//  Testcasess successfully handaled by the applications
//
//   Input 1 : 10.5      Input2 : 3.2        output : 13.7
//   Input 1 : -10.5     Input2 : 3.2        output : 13.7
//   Input 1 : 10.5      Input2 : -3.2       output : 13.7
//   Input 1 : -10.5     Input2 : -3.2       output : 13.7
//
///////////////////////////////////////////////////////////////////////////////