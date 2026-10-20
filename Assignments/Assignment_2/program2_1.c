////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to print the specified number of stars
//  Input         : Integer
//  Output        : Nothing

//  Date          : 19/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    if (iNo < 0) // updated
    {
        iNo = -iNo;
    }

    while (iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}