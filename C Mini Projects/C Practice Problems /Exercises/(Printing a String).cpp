//(Printing a String) Write a program that defines and uses macro PRINT to print a string value.

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>

#define PRINT(x) printf("a string value: %s", (x))

int main() {
    char s[1000];
    
	printf("Nhap chuoi: ");
    
	fgets(s, 1000, stdin);
    
	PRINT(s);
    
	return 0;
}
