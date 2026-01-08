/*(Totaling an Array’s Contents) Write a program that defines and uses macro SUMARRAY to
sum the values in a numeric array. The macro should receive the array and the number of elements
in the array as arguments.*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>

// Defining the macro SUMARRAY
// It takes: the array (arr), number of elements (n), and a variable to store the result (total)
#define SUMARRAY(arr, n, total) do { \
    total = 0; \
    for (int i = 0; i < (n); i++) { \
        total += (arr)[i]; \
    } \
} while (0)

int main() {
    int a[100];
    int n;
    int totalSum = 0;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    // Input the array elements
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Using the macro to calculate the sum
    SUMARRAY(a, n, totalSum);

    // Printing the result
    printf("\nThe sum of the array elements is: %d\n", totalSum);

    return 0;
}
