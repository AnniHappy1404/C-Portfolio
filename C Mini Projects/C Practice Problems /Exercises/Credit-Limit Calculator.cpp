/*(Credit-Limit Calculator) Develop a C program that will determine whether a department
store customer has exceeded the credit limit on a charge account. For each customer, the following
facts are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each fact, calculate the new balance (= beginning balance +
charges – credits), and determine whether the new balance exceeds the customer's credit limit. For
those customers whose credit limit is exceeded, the program should display the customer's account
number, credit limit, new balance and the message “Credit limit exceeded.”*/

// PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main(){
	unsigned int account_number;
	float beginning_balance;
	float total_charges;
	float total_credits;
	float credit_limit;
    float new_balance = 0;
	
	while (1){
		printf("Enter account number (-1 to end): ");
		scanf("%u", &account_number);
		if (account_number == -1){
            break;
        }
		printf("Enter beginning balance: ");
		scanf("%f", &beginning_balance);

		
		printf("Enter total charges: ");
		scanf("%f", &total_charges);

		
		printf("Enter total credits: ");
		scanf("%f", &total_credits);

		
		printf("Enter credit limit: ");
		scanf("%f", &credit_limit);


        new_balance = beginning_balance + total_charges - total_credits;

        if (new_balance > credit_limit){
            printf("Account: %u\n", account_number);
            printf("Credit limit: %.2f\n", credit_limit);
            printf("New balance: %.2f\n", new_balance);
            printf("Credit limit exceeded.\n\n");
        } else {
        	printf("\n");
		}
	}
    return 0;
}

