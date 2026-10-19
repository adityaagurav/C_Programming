////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to print Marvellous 5 times
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
    for (int i = 1; i <= 5; i++)
    {
        printf("%d Marvellous\n", i);
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}