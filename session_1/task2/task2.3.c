// Week 5, session 1

/* Task 2.3
 * Write a C program that perform the same function as the following Python program.

	Python program:
	balance = 100.0

	# Display ATM menu
	print("\nATM Menu")
	print("1. Check Balance")
	print("2. Deposit Money")
	print("3. Withdraw Money")

	choice = int(input("Enter your choice: "))

	match choice:
		case 1:
			print(f"Current balance: {balance:.2f}")

		case 2:
			amount = float(input("Enter amount to deposit: "))
			if amount > 0:
				balance += amount
				print(f"Deposited: {amount:.2f}")
				print(f"Current balance: {balance:.2f}")
			else:
				print("Invalid deposit amount")

		case 3:
			amount = float(input("Enter amount to withdraw: "))
			if amount > 0 and amount <= balance:
				balance -= amount
				print(f"Withdrawn: {amount:.2f}")
				print(f"Current balance: {balance:.2f}")
			else:
				print("Insufficient balance or invalid amount")

		case _:
			print("Invalid choice. Please try again.")
 */

#include <stdio.h>

int main(void)
{
	char buffer[100];
	int choice, check;
	double balance = 100.0;
	double amount;


	while (1) {
	/* Display ATM menu */
	printf("\nATM Menu\n");
	printf("1. Check Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Quit\n");

	choice = 0;
	while (choice < 1 || choice > 4)
	{
		printf("Enter your choice: ");
		fgets(buffer, 100, stdin);
		check = sscanf(buffer, "%d ", &choice);
		if (check - 1)
			choice = 0;
	}

	// complete the rest of the code
	switch (choice)
	{
	case 1:
		printf("Balance: %.2f\n", balance);
		break;
	case 2:
		printf("Enter amount to deposit: ");
		fgets(buffer, 100, stdin);
		check = sscanf(buffer, "%lf ", &amount);
		if (check - 1)
			return 1;
		balance += amount;
		printf("Deposited: %.2f\n", amount);
		printf("Current balance: %.2f\n", balance);
		break;
	case 3:
		printf("Enter amount to withdraw: ");
		fgets(buffer, 100, stdin);
		check = sscanf(buffer, "%lf ", &amount);
		if (check - 1)
			return 1;
		if (balance < amount)
		{
			printf("Insufficient funds\n");
		}
		else
		{
			balance -= amount;
			printf("Withdrawn: %.2f", amount);
			printf("Current balance: %.2f", balance);
		}
		break;
	case 4:
		return 0;
	default:
		printf("Invalid choice. Please try again.\n");
	}
}

	return 0;
}