/*
    Introduction: Programmers for a Better Tomorrow
    -----------------------------------------------
Programmers for a Better Tomorrow is an organization dedicated to helping charities, medical
societies, and scholarship organizations manage various tasks so that they can focus on making
the world a better place! They have asked you and your classmates to help them develop some
new programs to benefit their organizations.

Problem: Knitting for Fun and Non-Profit Part 2 (knit2.c)
---------------------------------------------------------
One of the programs that Programmers for a Better Tomorrow supports knits hats, sweaters,
and blankets for people who may not have enough to keep them warm. These may be sent to
other places in the country or overseas.
Each donated blanket is made from 60 knitted squares. These blanket squares are simple and
can be made in one day. The BlanketSquares program is becoming very popular and the
number of squares made every day is increasing at an exponential rate.
In this program, you will track the number of squares being made in one week using the
exponential growth function (shown below).

X = a (1 + b)^t

a represents the initial population, this is the number of people already making blanket squares
on the first of the week. b represents the growth rate, this is the number of new people knitting
blanket squares each day. t represents the time interval, which is 7 days for our program.
Your program should calculate X – the number of squares made this week – and print that
information for the user.
Then, your program should calculate the number of blankets that can be made from these
squares. Print this information and the number of left over squares.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    float b;

    printf("How many people are knitting blanket squares at the beginning of the week?\n");

    scanf("%d", &a);

    printf("How many new people are knitting blanket squares each day?\n");

    scanf("%f", &b);

    float X = a * pow((1 + b), 7);
    int blankets = (int)X / 60;
    int leftover = (int)X % 60;

    printf("%d blanket squares will be made this week!\n", (int)X);

    printf("You will be able to make %d blankets and start next week with %d squares.", blankets, leftover);
    return 0;

} // end main