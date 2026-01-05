/*(Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.32 so that it
prints a hollow square.*/

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
			if (i == 1 || i == n ){
				for (int j = 1; j <= n; j++){
					printf("*");
				}
			} else {
				for (int j = 1; j <= n; j++){
					if(j == 1 || j == n){
					printf("*");
					} else {
					printf(" ");
					}
				}
			}
		printf("\n");
		}
	return 0;
}
