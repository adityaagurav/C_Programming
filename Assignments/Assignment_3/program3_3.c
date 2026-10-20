////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to display the even factors
//                  of the given number
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void evenFactors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d", &iValue);

    evenFactors(iValue);
    return EXIT_SUCCESS;
}