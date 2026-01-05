/*Palindrome Tester) A palindrome is a number or a text phrase that reads the same backward as forward. For example, each of the following five-digit integers is a palindrome: 12321,
55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether
or not it’s a palindrome. [Hint: Use the division and remainder operators to separate the number
into its individual digits.]*/
//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main (){
	int n;
	int a = 0, b = 0;
while(1){
	printf("The number (-1 to end) ");
	scanf("%d", &n);
	if (n == -1) {
		printf("a program END");
		break;
		}
	if ( n < 10000 || n > 99999){
		printf("\nA program that reads in a five-digit integer\n");
		continue;
	}

	a = n / 1000;
	printf("Number 1: %d\n", a);
	printf("Number 1.1: %d\n", a/10);
	printf("Number 1.2: %d\n", a%10);

	b = n % 100;
	printf("Number 2: %d\n", b);
	printf("Number 2.1: %d\n", b%10);
	printf("Number 2.2: %d\n", b/10);

	if ( a / 10 == b % 10 && a % 10 == b / 10){
		printf("\nA palindrome is a number or a text phrase that reads the same backward as forward.\n");
		} else {
			printf("\nIt is not a palindrome.\n");
		}
}
	return 0;
}
