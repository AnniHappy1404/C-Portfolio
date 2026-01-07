/*(Strings Starting with "b") Write a program that reads a series of strings and prints only
those beginning with the letter "b".*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][50]; // Mang chua 5 chuoi, moi chuoi toi da 50 ky tu
    int i;

    printf("Nhap vao 5 chuoi bat ky:\n");

    // 1. Nhap du lieu vao mang
    for (i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    printf("\nCac chuoi bat dau bang chu 'b' la:\n");
    printf("----------------------------------\n");

    // 2. Kiem tra va in ket qua
    int found = 0;
    for (i = 0; i < 5; i++) {
        // Kiem tra ky tu dau tien (index 0)
        if (strings[i][0] == 'b' || strings[i][0] == 'B') {
            printf("%s\n", strings[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong co chuoi nao bat dau bang chu 'b'.\n");
    }

    return 0;
}
