////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : It is used to check whether a number
//                  is even or odd
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkEvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
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

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    bRet = checkEvenOdd(iValue);

    if(bRet == true)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    return EXIT_SUCCESS;
}