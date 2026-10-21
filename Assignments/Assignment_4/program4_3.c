////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : It is used to find the greater of two
//                  numbers or check whether both are equal
//  Input         : Integer, Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkGreater(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf("%d is Greater\n", iNo1);
    }
    else if (iNo1 < iNo2)
    {
        printf("%d is Greater\n", iNo2);
    }
    else
    {
        printf("Both Numbers are equal");
    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    printf("Enter 1st Number: \n");
    scanf("%d", &iValue1);

    printf("Enter 2nd Number: \n");
    scanf("%d", &iValue2);

    checkGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}