/*(Adding Two Numbers) Write a program that defines macro SUM with two arguments, x and
y, and use SUM to produce the following output:
The sum of x and y is 13*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>

// Defining the macro SUM
#define SUM(x, y) ((x) + (y))

int main() {
    int x;
    int y;
    
    printf("Number x: \n");
    scanf("%d", &x);
    printf("Number y: \n");
    scanf("%d", &y);

    // Using the macro inside printf
    printf("The sum of x and y is %d\n", SUM(x, y));

    return 0;
}
