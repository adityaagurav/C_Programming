////////////////////////////////////////////////////////////
//
//  Function Name : CalculateGrade
//  Description   : It is used to calculate the grade of a
//                  student based on the marks obtained
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(int iNo)
{
    if (iNo < 0 || iNo > 100)
    {
        printf("Invalid Marks\n");
    }
    else if (iNo > 90)
    {
        printf("Grade : A\n");
    }
    else if (iNo > 75)
    {
        printf("Grade : B\n");
    }
    else if (iNo > 60)
    {
        printf("Grade : C\n");
    }
    else if (iNo > 40)
    {
        printf("Grade : D\n");
    }
    else
    {
        printf("Grade : Fail\n");
    }
}

int main()
{
    int iMarks = 0;
    printf("Enter your Marks : ");
    scanf("%d", &iMarks);

    DisplayGrade(iMarks);

    return EXIT_SUCCESS;
}