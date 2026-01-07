/*(Converting Strings to Integers for Calculations) Write a program that inputs four strings
that represent integers, converts the strings to integers, sums the values and prints the total of the
four values.*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>
#include <stdlib.h>

int main() {
    char s1[20], s2[20], s3[20], s4[20];
    int n1, n2, n3, n4, total;

    // 1. Nhap 4 chuoi tu ban phim
    printf("Nhap so thu nhat (dang chuoi): ");
    scanf("%s", s1);
    printf("Nhap so thu hai (dang chuoi): ");
    scanf("%s", s2);
    printf("Nhap so thu ba (dang chuoi): ");
    scanf("%s", s3);
    printf("Nhap so thu tu (dang chuoi): ");
    scanf("%s", s4);

    // 2. Chuyen doi cac chuoi thanh so nguyen
    n1 = atoi(s1);
    n2 = atoi(s2);
    n3 = atoi(s3);
    n4 = atoi(s4);

    // 3. Tinh tong
    total = n1 + n2 + n3 + n4;

    // 4. In ket qua
    printf("\nTong cua bon gia tri la: %d\n", total);

    return 0;
}
