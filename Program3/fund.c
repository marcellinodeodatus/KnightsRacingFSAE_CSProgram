/*
Introduction: Programmers for a Better Tomorrow
-----------------------------------------------
Programmers for a Better Tomorrow is an organization dedicated to helping charities, medical
societies, and scholarship organizations manage various tasks so that they can focus on making
the world a better place! They have asked you and your classmates to help them develop some
new programs to benefit their organizations.

Problem: Scholarship Endowment Fund (fund.c)
--------------------------------------------
One division of Programmers for a Better Tomorrow is their Scholarship Endowment Fund. They
provide yearly scholarships to students who need a hand in amounts of 1000, 500, and 250
dollars.
The money for these scholarships comes from interest made on previous donations and
investments. You will create a program to compute the yearly interest in the Fund and
determine how many $1000, $500, and $250 scholarships can be awarded.
For example, if the Fund had 500,000 dollars in it on September 30th 2016 and the yearly
interest rate was 3 percent then the Fund will have 515,000 dollars in it at the end of this
September. This gives them $15,000 to disburse as scholarship money.
If possible, the Fund prefers to award 5 $1000 scholarships, 10 $500 scholarships, and as many
$250 as they have money left for. With $15,000 the Fund can award 5 $1000 scholarships, 10
$500 scholarships, and 20 $250 scholarships. Your program should print this information for the
user.
If that is not possible, the Fund will award as many $1000 and $500 scholarships as they can.
For example, if they had $4,750 they would award 4 $1000 scholarships, 1 $500 scholarship, and
1 $250 scholarship.
Input Specification
1. The amount of money in the fund, n, as of one year ago where n is greater than or equal
to 0. (n may include decimal places)
2. The yearly percent rate, p, as an integer where p is greater than zero.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double fund, rate, interest, available;
    int num_1000 = 0, num_500 = 0, num_250 = 0;

    // Get input values
    printf("How much was in the fund last year? ");
    scanf("%lf", &fund);
    printf("What is the yearly percentage rate? ");
    scanf("%lf", &rate);

    // Calculate interest and available scholarship funds
    interest = fund * rate / 100.0;

    printf("available fund: %.2lf \n", interest);

    // case 1: The available fund is bigger than $10,000
    if (interest > 10000)
    {
        available = interest - 10000;
        num_1000 = 5;
        num_500 = 10;

        while (available >= 250)
        {
            available = available - 250;
            num_250++;
        }
    }

    else if (interest >= 5000 && interest <= 10000)
    {
        // case 2: The available fund is between $5,000 and $10,000
        available = interest - 5000;
        num_1000 = 5;

        while (num_500 <= 10 && available > 500)
        {
            available = available - 500;
            num_500++;
        }

        while (available >= 250)
        {
            available = available - 250;
            num_250++;
        }
    }
    else if (interest < 5000)
    {
        // case 3: The available fund is less than $5,000
        available = interest;

        while (available >= 1000)
        {
            available = available - 1000;
            num_1000++;
        }

        while (available >= 500)
        {
            available = available - 500;
            num_500++;
        }

        while (available >= 250)
        {
            available = available - 250;
            num_250++;
        }
    }

    // Print results
    printf("%d $1000 scholarships will be awarded.\n", num_1000);
    printf("%d $500 scholarships will be awarded.\n", num_500);
    printf("%d $250 scholarships will be awarded.\n", num_250);

    return 0;
}