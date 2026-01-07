/*(Converting Strings to Floating Point for Calculations) Write a program that inputs four
strings that represent floating-point values, converts the strings to double values, sums the values
and prints the total of the four values.*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>
#include <stdlib.h> // Thu vien chua ham atof

int main() {
    char s1[30], s2[30], s3[30], s4[30];
    double n1, n2, n3, n4, total;

    printf("Nhap bon so thuc (dang chuoi):\n");

    // 1. Nhap du lieu duoi dang chuoi
    printf("Chuoi 1: "); scanf("%s", s1);
    printf("Chuoi 2: "); scanf("%s", s2);
    printf("Chuoi 3: "); scanf("%s", s3);
    printf("Chuoi 4: "); scanf("%s", s4);

    // 2. Chuyen doi chuoi sang kieu double bang ham atof
    n1 = atof(s1);
    n2 = atof(s2);
    n3 = atof(s3);
    n4 = atof(s4);

    // 3. Tinh tong
    total = n1 + n2 + n3 + n4;

    // 4. In ket qua voi 2 chu so thap phan
    printf("\nTong cua bon gia tri la: %.2f\n", total);

    return 0;
}
