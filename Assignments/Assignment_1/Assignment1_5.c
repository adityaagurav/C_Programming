////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description   : It is used to print the specified number of stars
//  Input         : Integer
//  Output        : *
//  Author        : Aditya Anil Gurav
//  Date          : 19/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d", &iValue);

    Accept(iValue);
    return EXIT_SUCCESS;
}