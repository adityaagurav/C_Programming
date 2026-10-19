////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to print numbers from 5 to 1
//  Input         : Nothing
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 19/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display()
{
    int i = 0;

    for (int i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}

int main()
{
    Display();
    return EXIT_SUCCESS;
}