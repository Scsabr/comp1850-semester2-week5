// Week 5, Session 1

/*
 * Task 1.4
 * Write a C program that perform the same function as the following Python program.

   Python program:
   order_amount = float(input("Enter order amount: "))

   is_premium = int(input("Is customer a premium member? (1 = Yes, 0 = No): "))

   is_blacklisted = int(input("Is customer blacklisted? (1 = Yes, 0 = No): "))


   if (order_amount > 100 or is_premium == 1) and not is_blacklisted:
       print("Discount Applied")
   else:
       print("No Discount")
 */

#include <stdio.h>

int main(void)
{
    float order_amount;
    int is_premium;
    int is_blacklisted;

    int check;
    char buffer[100];

    printf("Enter order amount: ");
    fgets(buffer, 100, stdin);
    check = sscanf(buffer, "%f ", &order_amount);
    if (check - 1)
        return 1;

    printf("Is customer a premium member? (1 = Yes, 0 = No): ");
    fgets(buffer, 100, stdin);
    check = sscanf(buffer, "%d ", &is_premium);
    if (check - 1 || (is_premium != 0 && is_premium != 1))
        return 1;

    printf("Is customer blacklisted? (1 = Yes, 0 = No): ");
    fgets(buffer, 100, stdin);
    check = sscanf(buffer, "%d ", &is_blacklisted);
    if (check - 1 || (is_blacklisted != 0 && is_blacklisted != 1))
        return 1;

    if ((order_amount > 100 || is_premium == 1) && !is_blacklisted)
    {
        printf("Discount Applied\n");
    }
    else
    {
        printf("No Discount\n");
    }

    return 0;
}