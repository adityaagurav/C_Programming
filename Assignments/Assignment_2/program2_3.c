////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It displays "Hello" if the number is less
//                  than 10, otherwise it displays "Demo"
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 19/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}