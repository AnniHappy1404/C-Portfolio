/*(Calculating the Sum of Even Integers) Write a program that calculates and prints the sum
of the even integers from 2 to 30.8*/
//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main(){
	int a;
	int sum = 0;
	while(1){
	printf("Nhap tong can tim: ");
	scanf("%d", &a);
	if ( a < 0 ) {
		printf("Ket thuc");
		break;
	}
	for( int i = 2; i <= a; i+=2){
		sum = sum + i;
	}
	printf("Gia tri tong so chan tu 2 den %d: %d\n",a ,sum);
	sum = 0;
	}
	return 0;
}

