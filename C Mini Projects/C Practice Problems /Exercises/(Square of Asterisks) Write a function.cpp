/*(Square of Asterisks) Write a function that displays a solid square of asterisks whose side is
specified in integer parameter side. */
//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

void drawSquare(int s){
	for ( int i = 1; i <= s; i++){
		for (int j = 1; j <= s; j++){
			printf("*");
		}
	printf("\n");
	}
}

int main (){
	int n;
	scanf("%d", &n);
	drawSquare(n);
	return 0;
}
