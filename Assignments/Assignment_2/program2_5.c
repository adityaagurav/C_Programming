////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to display the first number
//                  the specified number of times
//  Input         : Integer, Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)
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
    printf("Enter a number : \n");
    scanf("%d", &iValue);

    bool bRet = false;

    bRet = CheckEvenOdd(iValue);
    if (bRet == true)
    {
        printf("%d is even\n", iValue);
    }
    else
    {
        printf("%d is odd\n", iValue);
    }

    return EXIT_SUCCESS;
}