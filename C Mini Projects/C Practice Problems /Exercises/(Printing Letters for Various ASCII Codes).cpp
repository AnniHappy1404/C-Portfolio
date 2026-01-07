/*(Printing Letters for Various ASCII Codes) Write a program that inputs an ASCII code and
prints the corresponding character.*/

//PHAM NGUYEN HOANG TUAN
#include <stdio.h>

int main() {
    int asciiCode;

    printf("Nhap mot ma ASCII: ");
    scanf("%d", &asciiCode);

    if (asciiCode >= 0 && asciiCode <= 255) {
        printf("Ma ASCII %d tuong ung voi ky tu: '%c'\n", asciiCode, (char)asciiCode);
    } else {
        printf("Loi: Ma ASCII phai nam trong khoang tu 0 den 255.\n");
    }

    return 0;
}
