////////////////////////////////////////////////////////////
//
//  Function Name : ElectricityBillCalculation
//  Description   : It is used to calculate the electricity
//                  bill based on units consumed and slab rates
//  Input         : Float
//  Output        : Float
//  Author        : Aditya Anil Gurav
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

float ElectricityBillCalculation(float fUnit)
{
    float fBill = 0.0f;

    if (fUnit < 100)
    {
        fBill = fUnit * 5;
    }
    else if (fUnit <= 200)
    {
        fBill = (100 * 5) + ((fUnit - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((fUnit - 200) * 10);
    }

    return fBill;
}

int main()

{

    float fUnit = 0;
    float finalBill = 0;

    printf("Enter how many units used : ");
    scanf("%f", &fUnit);

    finalBill = ElectricityBillCalculation(fUnit);
    printf("Electricity Bill: Rs. %.2f\n", finalBill);

    return EXIT_SUCCESS;
}