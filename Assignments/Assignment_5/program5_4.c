////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisibility
//  Description   : It is used to check whether a number is
//                  divisible by 3 and 5, either one, or neither
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkDivisbility(int iNo)
{
    if ((iNo % 3) == 0 && (iNo % 5) == 0)
    {
        printf("%d is divisible by both 3 and 5 \n", iNo);
    }
    else if ((iNo % 3) == 0 && (iNo % 5) != 0)
    {
        printf("%d is divisible by only 3\n", iNo);
    }
    else if ((iNo % 3) != 0 && (iNo % 5) == 0)
    {
        printf("%d is divisible by only 5\n", iNo);
    }
    else
    {
        printf("%d is divisible by neither 5 nor 3\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a Number : ");
    scanf("%d", &iValue);

    checkDivisbility(iValue);

    return EXIT_SUCCESS;
}