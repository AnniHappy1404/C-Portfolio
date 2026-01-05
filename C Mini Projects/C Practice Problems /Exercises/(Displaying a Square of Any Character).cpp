/*(Displaying a Square of Any Character) Modify the function created in Exercise 5.19 to
form the square out of whatever character is contained in character parameter fillCharacter.*/
//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

void drawSquare(int s, char e){
	for ( int i = 1; i <= s; i++){
		for (int j = 1; j <= s; j++){
			printf("%c", e);
		}
	printf("\n");
	}
}

int main (){
	int n;
	char m;
	
	printf("Nhap kich thuoc: ");
	scanf("%d", &n);
	
	printf("Nhap ky tu: ");
	scanf(" %c", &m);
	
	drawSquare(n, m);
	return 0;
}

