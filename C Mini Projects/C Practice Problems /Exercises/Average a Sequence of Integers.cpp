/*(Average a Sequence of Integers) Write a program that calculates and prints the average of
several integers. Assume the last value read with scanf is the sentinel 9999. A typical input sequence
might be
10 8 11 7 9 9999
indicating that the average of all the values preceding 9999 is to be calculated.*/
//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main(){
	unsigned int n;
	unsigned int counter = 0;
	int sum = 0;
	float average;
	
	while (1){
    	printf("Enter integer (9999 to end): ");
		scanf("%u", &n);
		if (n == 9999) break;
		sum += n;
		counter++;
	}
	if (counter != 0) {
		average = (float)sum / counter;
		printf("%.2f", average);
	} else {
		printf("No values were entered.");
	}
	return 0;
}
