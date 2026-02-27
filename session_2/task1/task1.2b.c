//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.2b
 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
 * 
 * Python code:
 * while choice != 'q':
 *     choice = input("Enter 'q' to quit: ")
 */
	char choice;
	// complete the rest of the code here

	while(choice!='q')
	{
		printf("Enter 'q' to quit: ");
		choice = fgetc(stdin);
		if (choice!='\n')
			fgetc(stdin);
	}

	choice = '\0';
	
	do{
		printf("Enter 'q' to quit: ");
		choice = fgetc(stdin);
		if (choice!='\n')
			fgetc(stdin);
	}while(choice!='q');
	
    return 0;
}