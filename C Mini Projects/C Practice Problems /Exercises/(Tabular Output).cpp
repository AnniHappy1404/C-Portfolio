/*(Tabular Output) Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.*/

//PHAM NGUYEN HOANG TUAN
#include<stdio.h>

int main(){
	
	int n;
	
	printf("Nhap so: ");
	scanf("%d", &n);
	
	printf("\nN\t10*N\t100*N\t1000*N\n\n");
	
	for ( int i = 1; i<=10 ; i++){
		printf("%d\t%d\t%d\t%d\n",i ,i*10, i*100, i*1000);
	}
	return 0;
}
