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
