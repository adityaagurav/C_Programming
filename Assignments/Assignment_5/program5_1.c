///////////////////////////////////////////////////////////
//
//  Function Name : FindGreatest
//  Description   : It is used to find the greatest among
//                  three numbers
//  Input         : Integer, Integer, Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckGreater(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 > iNo2 && iNo1 > iNo3)
    {
        printf("%d is Greatest Number ", iNo1);
    }
    else if (iNo2 > iNo1 && iNo2 > iNo3)
    {
        printf("%d is Greatest Number ", iNo2);
    }
    else
    {
        printf("%d is Greatest Number ", iNo3);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter 1st Number : ");
    scanf("%d", &iValue1);

    printf("Enter 2nd Number : ");
    scanf("%d", &iValue2);

    printf("Enter 3rd Number : ");
    scanf("%d", &iValue3);

    CheckGreater(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}