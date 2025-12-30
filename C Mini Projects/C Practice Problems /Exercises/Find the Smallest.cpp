/*(Find the Smallest) Write a program that finds the smallest of several integers. Assume that
the first value read specifies the number of values remaining.*/
//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main(){
	unsigned int count;	
	int value;
	int min;
	
	scanf("%u", &count);
	if (count == 0) {
		printf("No values were entered.");
		return 0;
	}
	
	scanf("%d", &min);
	
	for ( int i = 1; i < count ; i++){
		scanf("%d",&value);
			if (min >= value){
				min = value;
			}
	}
	
	printf("The smallest integer is: %d\n", min);	
	return 0;
}
