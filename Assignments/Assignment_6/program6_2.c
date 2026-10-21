////////////////////////////////////////////////////////////
//
//  Function Name : checkAdmission
//  Description   : It is used to check whether a student is
//                  eligible for admission based on marks and age
//  Input         : Float, Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void checkAdmission(float fMarks, int iAge)
{
    if (fMarks < 0 && iAge > 100)
    {
        printf("Invalid Input\n");
    }
    else if (fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter your marks : ");
    scanf("%f", &fMarks);

    printf("Enter your age : ");
    scanf("%d", &iAge);

    checkAdmission(fMarks, iAge);
    return EXIT_SUCCESS;
}