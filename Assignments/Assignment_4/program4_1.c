////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : It is used to check whether a number
//                  is positive, negative or zero
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkNum(int iNo)
{
    if (iNo > 0)
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

    bRet = checkNum(iValue);
    if (bRet == true)
    {
        printf("Positive number");
    }
    else
    {
        printf("Negative number");
    }

    return EXIT_SUCCESS;
}