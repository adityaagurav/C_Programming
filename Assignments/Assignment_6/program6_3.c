////////////////////////////////////////////////////////////
//
//  Function Name : CalculateDiscount
//  Description   : It is used to calculate the final payable
//                  amount after applying the discount
//  Input         : Float
//  Output        : Float
//  Author        : Aditya Anil Gurav
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float iNo)
{
    float fDiscount = 0.0f;
    float fPayable = 0.0f;
    if (1000 > iNo)
    {
        ;
        fPayable = iNo;
    }
    else if (5000 > iNo)
    {
        fDiscount = (iNo * 0.1);
        fPayable = iNo - fDiscount;
    }
    else
    {
        fDiscount = (iNo * 0.2);
        fPayable = iNo - fDiscount;
    }

    printf("Payable amount is : %.2f", fPayable);
}

int main()
{
    float fAmount = 0.0f;
    printf("Enter your total Amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);
    return EXIT_SUCCESS;
}