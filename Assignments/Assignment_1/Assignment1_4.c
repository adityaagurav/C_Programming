////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : It checks whether a number is divisible by 5
//  Input         : Integer
//  Output        : Boolean
//  Author        : Aditya Anil Gurav
//  Date          : 19/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Divisible(int iNo)
{
    if ((iNo % 5) == 0)
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

    printf("Enter a number\n");
    scanf("%d", &iValue);

    bRet = Divisible(iValue);

    if (bRet == true)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }

    return EXIT_SUCCESS;    
}