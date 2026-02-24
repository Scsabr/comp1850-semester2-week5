// Week 5, session 1

/*
 * Task 2.2
 * Write a C program that converts currency using a switch statement.
 *
 * Input:
 * - amount: a floating-point number representing the amount of money.
 * - choice: an integer representing the conversion option selected by the user:
 *   1 → USD to EUR
 *   2 → EUR to USD
 *   3 → USD to GBP
 *   4 → GBP to USD
 *
 * Usage:
 * - The program displays a menu and reads the user's choice and amount
 *   from standard input.
 *
 * Example:
 * Input:
 * 2
 * 100
 *
 * Output:
 * Converted amount: 108.00 USD
 *
 * Output:
 * - Print the converted amount based on the selected option.
 * - Print an error message for an invalid menu option.
 */

#include <stdio.h>

int main(void)
{
    char buffer[100];
    int choice, check;
    double amount, converted;

    /* conversion rates */
    double USD_TO_EUR = 0.92;
    double EUR_TO_USD = 1.08;
    double USD_TO_GBP = 0.79;
    double GBP_TO_USD = 1.27;
    double rates[] = {0.92, 1.08, 0.79, 1.27};

    /* Display menu */
    printf("Currency Converter\n");
    printf("1. USD to EUR\n");
    printf("2. EUR to USD\n");
    printf("3. USD to GBP\n");
    printf("4. GBP to USD\n");
    
    choice = 0;
    while (choice < 1 || choice > 4)
    {
        printf("Enter your choice: ");
        fgets(buffer, 100, stdin);
        check = sscanf(buffer, "%d ", &choice);
        if (check - 1)
            choice = 0;
    }

    printf("Enter amount: ");
    scanf("%lf", &amount);

    // Complete your code here
    switch (choice)
    {
    case 1:case 2:case 3:case 4:
        converted = amount * rates[choice-1];
        break;
    default:
        printf("Invalid option\n");
    }

    printf("%.2f -> %.2f\n", amount, converted);

    return 0;
}