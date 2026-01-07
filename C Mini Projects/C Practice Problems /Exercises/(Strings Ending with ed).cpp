/*(Strings Ending with "ed") Write a program that reads a series of strings and prints only
those that end with the letters "ed".*/
//PHAM NGUYEN HOANG TUAN

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, i;

    printf("Nhap so luong chuoi ban muon kiem tra: ");
    scanf("%d", &n);
    getchar();

    printf("\nNhap cac chuoi (nhan Enter sau moi chuoi):\n");

    for (i = 0; i < n; i++) {
        printf("- ");
        fgets(s, sizeof(s), stdin);

        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
            len--;
        }

        if (len >= 2) {
            if (s[len - 2] == 'e' && s[len - 1] == 'd') {
                printf("  => Tim thay: %s\n", s);
            }
        }
    }

    return 0;
}
