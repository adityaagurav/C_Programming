////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to display the first number
//                  the specified number of times
//  Input         : Integer, Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 19/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    if (iFrequency < 0)
    {
        iFrequency = 0;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter the number to print : ");
    scanf("%d", &iValue);

    printf("Enter the frequency to print : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}