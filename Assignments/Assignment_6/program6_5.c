////////////////////////////////////////////////////////////
//
//  Function Name : fBonus
//  Description   : It is used to calculate the employee's
//                  bonus based on years of service and
//                  display the bonus and final salary
//  Input         : Float, Integer
//  Output        : Float
//  Author        : Aditya Anil Gurav
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

float fBonus(float fSalary, int iYears)
{
    float BonusAmt = 0.0f;

    if (iYears > 10)
    {
        BonusAmt = fSalary * 0.15;
        fSalary = fSalary + BonusAmt;
    }
    else if (iYears <= 10)
    {
        BonusAmt = fSalary * 0.10;
        fSalary = fSalary + BonusAmt;
    }
    else
    {
        BonusAmt = fSalary * 0.05;
        fSalary = fSalary + BonusAmt;
    }

    printf("Your Bonus Amount will be : %.2f\n", BonusAmt);
    printf("Your final Bonus salary is : %.2f\n", fSalary);

    return 0;
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter your current salary per month : ");
    scanf("%f", &fSalary);

    printf("Enter your current work years : ");
    scanf("%d", &iYears);

    fBonus(fSalary, iYears);
    return EXIT_SUCCESS;
}