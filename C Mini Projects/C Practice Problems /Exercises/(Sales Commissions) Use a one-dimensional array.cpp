/*6.10 (Sales Commissions) Use a one-dimensional array to solve the following problem. A company pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of
their gross sales for that week. For example, a salesperson who grosses $3,000 in sales in a week receives $200 plus 9% of $3,000, or a total of $470. Write a C program (using an array of counters)
that determines how many of the salespeople earned salaries in each of the following ranges (assume
that each salesperson’s salary is truncated to an integer amount):
a) $200–299
b) $300–399
c) $400–499
d) $500–599
e) $600–699
f) $700–799
g) $800–899
h) $900–999
i) $1000 and over*/

/*
 * _______________________________________________________
 * |                                                       |
 * |             CREATED BY PHAM NGUYEN HOANG TUAN         |
 * |_______________________________________________________|
 *
 * Language : C
 * Solution for C How to Program - Exercise 6.10
 */

#include<stdio.h>

int salary(float s);

int main(){
	float sale;
	unsigned int count[9]={0};
		
		while (1){
		
    		printf("Nhap doanh thu ban hang (-1 de ket thuc): ");
			scanf("%f", &sale);
				if (sale <0) {
					break;
				}
			int n = salary(sale);
			printf("Tien luong la: %d\n", n);
			
			int m = (n - 200)/100;
			
			if ( m > 8){
				m = 8;
			}
			count[m]++;
		}
	
		printf("\nThong ke muc luong:\n");
    	
		for (int i = 0; i < 8; i++) {
    		printf("$%d-%d: %d nguoi\n", 200 + i * 100, 299 + i * 100, count[i]);
    		}
    	printf("$1000 tro len: %u nguoi\n", count[8]);
return 0;
}

int salary(float s){
	int sum = (int)(200 + (0.09 * s));
	return sum;
	}

