/*(Character Testing) Write a program that inputs a character from the keyboard and tests it
with each of the functions in the character-handling library. The program should print the value
returned by each function.*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Nhap mot ky tu de kiem tra: ");
    scanf("%c", &c);

    printf("\nKet qua tra ve cua cac ham trong <ctype.h> cho ky tu '%c':\n", c);
    printf("---------------------------------------------------------\n");

    // Cac ham kiem tra (Tra ve gia tri khac 0 neu dung, 0 neu sai)
    printf("isdigit('%c')  : %d\n", c, isdigit(c));   // Kiem tra chu so (0-9)
    printf("isalpha('%c')  : %d\n", c, isalpha(c));   // Kiem tra chu cai (A-Z, a-z)
    printf("isalnum('%c')  : %d\n", c, isalnum(c));   // Kiem tra chu cai hoac chu so
    printf("isxdigit('%c') : %d\n", c, isxdigit(c));  // Kiem tra ky tu thap luc phan (0-9, A-F)
    printf("islower('%c')  : %d\n", c, islower(c));   // Kiem tra chu thuong
    printf("isupper('%c')  : %d\n", c, isupper(c));   // Kiem tra chu hoa
    printf("isspace('%c')  : %d\n", c, isspace(c));   // Kiem tra khoang trang (\n, \t, ' ', ...)
    printf("iscntrl('%c')  : %d\n", c, iscntrl(c));   // Kiem tra ky tu dieu khien
    printf("ispunct('%c')  : %d\n", c, ispunct(c));   // Kiem tra dau cau (ky tu dac biet)
    printf("isprint('%c')  : %d\n", c, isprint(c));   // Kiem tra ky tu co the in ra (gom ca dau cach)
    printf("isgraph('%c')  : %d\n", c, isgraph(c));   // Kiem tra ky tu co the in ra (khong gom dau cach)

    printf("---------------------------------------------------------\n");
    printf("tolower('%c')  : %d (ky tu: '%c')\n", c, tolower(c), tolower(c));
    printf("toupper('%c')  : %d (ky tu: '%c')\n", c, toupper(c), toupper(c));

    return 0;
}
