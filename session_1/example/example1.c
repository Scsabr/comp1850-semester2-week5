// Week 5, session 1

/*
 * Boolean Logic examples in C
 */

#include <stdio.h>
#include <stdbool.h>  // Required for boolean type support

int main(void) {
    // Define some simple boolean variables
    bool a = true;
    bool b = false;


    
    printf("===== Basic Boolean Operations =====\n");
    
    // Basic logical operations
    printf("a = %d, b = %d\n", a, b);         // true is 1, false is 0
    printf("a && b (AND): %d\n", a && b);     // false (0) - both must be true
    printf("a || b (OR): %d\n", a || b);      // true (1) - at least one must be true
    printf("!a (NOT): %d\n", !a);             // false (0) - inverts the value
    
    printf("\n===== Compound Boolean Operations =====\n");
    
    // Compound operations
    printf("a && !b: %d\n", a && !b);          // true - a is true AND b is NOT true
    printf("!a || b: %d\n", !a || b);          // false - a is NOT true OR b is true
    printf("!(a && b): %d\n", !(a && b));      // true - NOT (a AND b)
    
    printf("\n===== Using Boolean Variables =====\n");
    
    // Create derived boolean variables
    bool c = a && !b;    // true - store result in a new variable
    printf("c = a && !b: %d\n", c);
    
    // Using boolean variables in if statements
    if (c) {
        printf("c is true, this code block runs\n");
    } else {
        printf("c is false, this code block doesn't run\n");
    }
    
    printf("\n===== Short-Circuit Evaluation =====\n");
    
    // Short-circuit evaluation
    printf("First expression: if a is false, b is not evaluated in (a && b)\n");
    if (false && printf("This won't print\n")) {
        // This block never runs - first part is false
    }
    
    printf("Second expression: if a is true, b is not evaluated in (a || b)\n");
    if (true || printf("This won't print\n")) {
        printf("This block runs because true || anything is true\n");
    }
	
	printf("\n===== Weather Example =====\n");
    
    // Boolean example related to weather conditions
    bool is_raining = true;
    bool is_windy = false;
    bool is_cold = true;
    
    // Derived conditions
    bool stay_indoors = is_raining && is_cold;
    bool take_umbrella = is_raining && !is_windy;
    bool wear_jacket = is_cold || is_windy;
    
    printf("Weather conditions:\n");
    printf("Raining: %d, Windy: %d, Cold: %d\n", is_raining, is_windy, is_cold);
    printf("Stay indoors: %d\n", stay_indoors);
    printf("Take umbrella: %d\n", take_umbrella);
    printf("Wear jacket: %d\n", wear_jacket);
	
	return 0;
}