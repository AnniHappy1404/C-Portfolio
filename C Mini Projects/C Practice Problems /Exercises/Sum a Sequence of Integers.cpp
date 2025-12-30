/* (Sum a Sequence of Integers) Write a program that sums a sequence of integers. Assume that
the first integer read with scanf specifies the number of values remaining to be entered. Your program should read only one value each time scanf is executed. A typical input sequence might be
5 100 200 300 400 500
where the 5 indicates that the subsequent five values are to be summed.*/
// PHAM NGUYEN HOANG TUAN
#include<stdio.h>

int main(){
	unsigned int n;
	int sum = 0;
	int s;
	
	scanf("%u", &n);
	
	for(int i=1 ; i <= n ; i++){
		scanf("%d", &s);
		sum += s;
	}
	printf("The sum is: %d\n", sum);
	
	return 0;
}

