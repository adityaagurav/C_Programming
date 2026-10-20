////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to display the specified
//                  number of even numbers
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void printEven(int iNo)
{
    int iCnt = 0;
    int evenNum = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", 2 * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d", &iValue);

    printEven(iValue);

    return EXIT_SUCCESS;
}