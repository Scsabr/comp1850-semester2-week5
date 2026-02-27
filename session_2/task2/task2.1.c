// Week 5, Session 2

/* Task 2.1
 * Temperature conversion with input validation
 * Converts temperatures between Celsius and Fahrenheit with error checking
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper function

int main(void)
{
    char input[50];
    float temperature;
    char scale;
    int valid_input = 0;
    float converted_temp;
    int repeat = 1;
    int check;

    printf("=== Temperature Converter ===\n");

    do
    {
        if (!valid_input)
            printf("Invalid input.\n");

        valid_input = 1;

        printf("Enter temperature with scale (e.g., 23.5C or 75F): ");
        fgets(input, 50, stdin);

        check = sscanf(input, "%f%c ", &temperature, &scale);
        if (check - 2)
        {
            valid_input = 0;
            continue;
        }

        scale = toupper(scale);
        switch(scale)
        {
            case 'F': converted_temp = (temperature - 32) * 5/9; break;
            case 'C': converted_temp = temperature * 9/5 + 32; break;
            default: valid_input=0; continue;
        }

        printf("%.1f°%c is equal to %.1f°%c\n", temperature,scale, converted_temp, (scale=='C')?'F':'C');

        repeat = 0;
    } while (repeat);

    return 0;
}
