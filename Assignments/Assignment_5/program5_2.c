////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description   : It is used to check whether a year is
//                  a leap year or invalid
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkLeap(int iNo)
{
    if ((iNo % 400) == 0 || ((iNo % 4) == 0 && (iNo % 100) != 0))
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
    int iYear = 0;
    bool bRet = false;

    printf("Enter a Year : ");
    scanf("%d", &iYear);

    bRet = checkLeap(iYear);
    if (bRet == true)
    {
        printf("%d is a Leap Year", iYear);
    }
    else
    {
        printf("%d is a not a Leap Year", iYear);
    }
    
    return EXIT_SUCCESS;
}