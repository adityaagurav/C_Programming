////////////////////////////////////////////////////////////
//
//  Function Name : checkTriangle
//  Description   : It is used to check whether three sides
//                  can form a valid triangle
//  Input         : Integer, Integer, Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkTriangle(int iSide1, int iSide2, int iSide3)
{
    if (iSide1 + iSide2 > iSide3 && iSide1 + iSide3 > iSide2 && iSide3 + iSide2 > iSide1)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{

    int iSide1 = 0;
    int iSide2 = 0;
    int iSide3 = 0;

    printf("Enter side 1 of the triangle : ");
    if (scanf("%d", &iSide1) == 0)
    {
        fprintf(stderr, "Unable to proceed as input is invalid");

        return EXIT_FAILURE;
    }

    printf("Enter side 2 of the triangle : ");
    if (scanf("%d", &iSide2) == 0)
    {
        fprintf(stderr, "Unable to proceed as input is invalid");

        return EXIT_FAILURE;
    }

    printf("Enter side 3 of the triangle : ");
    if (scanf("%d", &iSide3) == 0)
    {
        fprintf(stderr, "Unable to proceed as input is invalid");

        return EXIT_FAILURE;
    }

    checkTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
