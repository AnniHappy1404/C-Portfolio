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
