////////////////////////////////////////////////////////////
//
//  Function Name : CheckVotingEligibility
//  Description   : It is used to check whether a person is
//                  eligible for voting or has an invalid age
//  Input         : Integer
//  Output        : Nothing
//  Author        : Aditya Anil Gurav
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckVote(int iNo)
{
    if(iNo > 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter your age : ");
    scanf("%d", &iValue);

    bRet = CheckVote(iValue);

    if(bRet == true)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not Eligible for voting");
    }

    return EXIT_SUCCESS;
}