/*(Displaying Strings in Uppercase and Lowercase) Write a program that inputs a line of text
into char array s[100]. Output the line in uppercase letters and in lowercase letters.*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int i;

    printf("Nhap mot dong van ban: ");
    fgets(s, sizeof(s), stdin);

    printf("\nChu hoa: ");
    for (i = 0; s[i] != '\0'; i++) {
        putchar(toupper(s[i]));
    }

    printf("Chu thuong: ");
    for (i = 0; s[i] != '\0'; i++) {
        putchar(tolower(s[i]));
    }

    return 0;
}
