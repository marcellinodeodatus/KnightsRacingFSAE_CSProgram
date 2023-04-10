#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int t = 7;
    double x = 0.0;

    printf("How many people are knitting blanket squares at the beginning of the week?\n");
    scanf("%d", &a);

    printf("How many people are knitting blanket squares each day?\n");
    scanf("%d", &b);

    x = a * (1 + b) ^ t;

    printf("%.2lf blanked squares will be made this week!\n", x);

} // end main