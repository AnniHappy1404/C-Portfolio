/*(Square of Asterisks) Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 4, it should print*/

//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main(){
	int n;
	
	printf("Size n: ");
	scanf("%d", &n);
	if ( n < 1 || n > 20){
		printf("Program should work for squares of all side sizes between 1 and 20.");
		return 0;
	}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
			printf("*");
			}
		printf("\n");
		}
	return 0;
}
