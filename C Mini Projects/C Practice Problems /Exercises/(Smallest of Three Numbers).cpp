/*(Smallest of Three Numbers) Write a program that defines and uses macro MINIMUM3 to determine the smallest of three numeric values. Macro MINIMUM3 should use macro MINIMUM2 defined
in Exercise 13.6 to determine the smallest number. Input the values from the keyboard.*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>

#define MINIMUM2(x, y) (( (x) < (y) ) ? (x) : (y))
#define MINIMUM3(x, y, z) (MINIMUM2(x, MINIMUM2(y, z)))

int main() {
    double num1, num2, num3;

    printf("Enter two numeric values: ");
    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter numbers.\n");
        return 1;
    }

    printf("The smallest value is: %.2f\n", MINIMUM3(num1, num2, num3));

    return 0;
}
