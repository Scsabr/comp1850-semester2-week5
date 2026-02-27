//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.3
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to read a series of integers from the user and sum them
 * until a 0 (zero) is entered. Print the sum at the end.
 */

    int check, input, total=0;
    char buffer[100];

    do
    {
        printf("Enter number: ");
        fgets(buffer,100,stdin);
        check = sscanf(buffer, "%d ", &input);
        if (check-1)
            continue;
        total += input;
    } while (input!=0);
    
    printf("Total: %d\n", total);
    


    return 0;
}