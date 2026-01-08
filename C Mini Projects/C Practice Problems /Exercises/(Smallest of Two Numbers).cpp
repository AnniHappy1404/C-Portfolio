#include <stdio.h>

// Defining the macro MINIMUM2
// We use extra parentheses around x and y to ensure correct evaluation
#define MINIMUM2(x, y) (( (x) < (y) ) ? (x) : (y))

int main() {
    double num1, num2;

    // Input values from the keyboard
    printf("Enter two numeric values: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input. Please enter numbers.\n");
        return 1;
    }

    // Use the macro to find and print the smallest value
    printf("The smallest value is: %.2f\n", MINIMUM2(num1, num2));

    return 0;
}
