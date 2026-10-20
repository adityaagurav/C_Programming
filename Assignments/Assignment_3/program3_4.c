////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description   : It is used to convert the case of a character
//  Input         : Character
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}