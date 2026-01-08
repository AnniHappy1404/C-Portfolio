/*(Printing an Array) Write a program that defines and uses macro PRINTARRAY to print an
array of integers. The macro should receive the array and the number of elements in the array as
arguments.*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>

#define PRINTARRAY(arr, size) { \
    for (int i = 0; i < (size); i++) { \
        printf("[%d]", (arr)[i]); \
    } \
    printf("\n"); \
}

int main() {
    int a[100];
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Ket qua mang vua nhap: ");
    PRINTARRAY(a, n);

    return 0;
}
