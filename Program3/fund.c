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

int main()
{
    double fund;
    int rate, interest, scholarships1000, scholarships500, scholarships250;

    // Get user input
    printf("How much was in the fund last year?\n");
    scanf("%lf", &fund);
    printf("What is the yearly percentage rate?\n");
    scanf("%d", &rate);

    // Calculate interest and scholarships
    interest = (int)(fund * rate / 100);
    scholarships1000 = interest / 1000;
    interest %= 1000;
    scholarships500 = interest / 500;
    interest %= 500;
    scholarships250 = interest / 250;

    // Output results
    printf("%d $1000 scholarships will be awarded.\n", scholarships1000);
    printf("%d $500 scholarships will be awarded.\n", scholarships500);
    printf("%d $250 scholarships will be awarded.\n", scholarships250);

    return 0;
}
