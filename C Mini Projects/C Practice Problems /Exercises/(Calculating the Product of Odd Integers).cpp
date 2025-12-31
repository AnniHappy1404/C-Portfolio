/*(Calculating the Product of Odd Integers) Write a program that calculates and prints the
product of the odd integers from 1 to 15.8*/
//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main(){
	int a;
	int sum = 1;
	printf("Tich so nguyen can tim: ");
	scanf("%d", &a);
	
	for( int i = 1; i <= a; i += 2){
		sum = sum * i;
	}
	printf("Tich cac so nguyen: %d\n", sum);
	int test = 1 * 3 * 5 * 7 * 9 * 11 * 13 * 15;
	printf("Kiem tra dap an tinh duoc la: %d , so voi dap an tinh tay: %d\n", sum, test);
	if (sum == test){
		printf("KET QUA DUNG VOI TRUONG HOP 15");
	} else {
		printf("KET QUA SAI HOAC KHONG THUOC TRUONG HOP 15");

	}
	return 0;

}
