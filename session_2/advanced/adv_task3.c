// Week 5, Session 2

/* Advanced task 3
 * In basic cryptography, a transposition cipher rearranges the characters
 * of a message by writing it into a grid and then reading it out column by column.
 *
 * The task:
 * Given a 1D array (a string) of 16 characters and a 4x4 grid:
 * 1. Use the outer loop to represent columns (0 to 3)
 * 2. Use the inner loop to represent rows (0 to 3)
 * Print the characters in an order that "flips" the message column by column. 
 * 
 * If we visualize the input "COMPUTER SCIENCE" in a 4x4 grid:
 * Row/Col	0	1	2	3
 * 		0	C	O	M	P
 * 		1	U	T	E	R
 * 		2		S	C   I
 * 		3	E	N	C   E
 * It should print CU EOTSNMECCPRIE.
 * Column 0: CU E
 * Column 1: OTSN
 * Column 2: MECC
 * Column 3: PRIE
 * 
 * You can either:
 * (a) assign the characters into a 2D array and print them out
 * (b) advanced logic: map the 1D index using the formula index=(row*4) + col
 *     and this will find a 1D index from 2D coordinates.
 */
 
#include <stdio.h>

int main() {
    // 16-character message (including spaces)
    char message[] = "COMPUTER SCIENCE"; 
    int grid_size = 4;

    printf("Original: %s\n", message);
    printf("Ciphered: ");
	
	//complete the your code here


    return 0;
}