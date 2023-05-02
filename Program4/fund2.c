#include <stdio.h>
#include <stdlib.h>

int displayMenu();
void makeDonation(int *balance, int *donation);
void makeInvestment(int *balance, int *baseline, int *investment);
void printBalance(int balance, int donation, int investment);

int main()
{
    int balance = 0;
    int baseline = 0;
    int choice = 0;
    int donation = 0;
    int investment = 0;

    printf("Welcome!\n");
    printf("What is the initial balance of the fund?\n");
    scanf("%d", &balance);
    baseline = balance;

    while (choice != 4)
    {
        choice = displayMenu();
        switch (choice)
        {
        case 1: // Make a donation
            makeDonation(&balance, &donation);
            break;
        case 2: // Make an investment
            makeInvestment(&balance, &baseline, &investment);
            break;
        case 3: // Print balance of fund
            printBalance(balance, donation, investment);
            break;
        case 4: // Display final balance, # of donations and investments, then Quit
            printf("The final balance is %d\n", balance);
            printf("There were %d donations and %d investments.\n", donation, investment);
            break;
        default:
            printf("Please enter a valid choice between 1 to 4.");
            break;
        } // end switch choice

    } // end while loop

} // end main

int displayMenu()
{

    int choice = 0;
    printf("What would you like to do?\n");
    printf("1 - Make a donation\n");
    printf("2 - Make an investment\n");
    printf("3 - Print balance of fund\n");
    printf("4 - Quit\n");
    scanf("%d", &choice);

    return choice;

} // end function displayMenu

void makeDonation(int *balance, int *donation)
{
    int c;
    printf("How much would you like to donate?\n");
    scanf("%d", &c);

    *balance = *balance + c;
    *donation = *donation + 1;

} // end function makeDonation

void makeInvestment(int *balance, int *baseline, int *investment)
{
    int a = 0;
    int c = 0;

    printf("How much would you like to invest?\n");
    scanf("%d", &c);

    a = *balance - c;

    if (a < *baseline)
    {
        printf("You cannot make an investment of that amount.\n");
    }
    else
    {
        *balance = *balance - c;
        *investment = *investment + 1;
    }

} // end function makeInvestment

void printBalance(int balance, int donation, int investment)
{
    printf("The current balance is $%d.00\n", balance);
    printf("There have been %d donations and %d investments.\n", donation, investment);

} // end function printBalance