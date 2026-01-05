/*(Calculating Credit Limits) Collecting money becomes increasingly difficult during periods of recession, so companies may tighten their credit limits to prevent their accounts receivable
(money owed to them) from becoming too large. In response to a prolonged recession, one company
has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000,
it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that
analyzes the credit status of three customers of this company. For each customer you’re given:
a) The customer’s account number.
b) The customer’s credit limit before the recession.
c) The customer’s current balance (i.e., the amount the customer owes the company).
Your program should calculate and print the new credit limit for each customer and should
determine (and print) which customers have current balances that exceed their new credit limits*/
// PHAM NGUYEN HOANG TUAN
#include<stdio.h>

int main(){
	int account_number, n;
	float credit_limit, current_balance, new_credit_limit = 0;
	
	printf("Number of customer: ");
	scanf("%d",&n);
	
	for (int i = 1; i <= n; i++){
		
		printf("\nThe customer account number: ");
		scanf("%d", &account_number);
	
		printf("The customer credit limit before the recession: ");
		scanf("%f", &credit_limit);
	
		printf("The customer current balance (i.e., the amount the customer owes the company): ");
		scanf("%f", &current_balance);
	
	new_credit_limit = credit_limit / 2;
	
	if (new_credit_limit < current_balance){
		printf("\nThe new credit limit for [%d] customer: %.2f", account_number, new_credit_limit);
		printf("\nCustomers have current balances that exceed their new credit limits.\n\n");
	} 
	else {
		printf("\nThe new credit limit for [%d] customer: %.2f\n\n", account_number, new_credit_limit);
	}
	}
	return 0;
}
