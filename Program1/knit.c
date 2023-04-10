/*
Introduction: Programmers for a Better Tomorrow
-----------------------------------------------
Programmers for a Better Tomorrow is an organization dedicated to helping charities, medical
societies, and scholarship organizations manage various tasks so that they can focus on making
the world a better place! They have asked you and your classmates to help them develop some
new programs to benefit their organizations.

Problem: Knitting for Fun and Non-Profit (knit.c)
-------------------------------------------------
One of the programs that Programmers for a Better Tomorrow supports knits hats, sweaters,
and blankets for people who may not have enough to keep them warm. These may be sent to
other places in the country or overseas.
In this program, you will ask the user how many balls of yarn they have on hand and how many
yards of yarn each ball contains. Then, based on the total number of yards the user has, your
program can determine how many hats OR sweaters can be made.
It takes 225 yards to make a hat and 450 yards to make a sweater. If the user has 500 total
yards, they would be able to make two hats or one sweater. Your program should print this
information for the user.
*/
#include <stdio.h>

int main()
{

    int num_balls = 0, yards_per_ball = 0, total_yards = 0;

    printf("How many balls of yarn do you have?\n");
    scanf("%d", &num_balls);

    printf("How many yards are in each ball of yarn?\n");
    scanf("%d", &yards_per_ball);

    total_yards = num_balls * yards_per_ball;

    int hats = total_yards / 225;

    int sweaters = total_yards / 450;

    printf("You can make %d hats or %d sweaters.\n", hats, sweaters);

    return 0;
} // end main