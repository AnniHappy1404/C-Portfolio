/*(Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles. One
driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for
each tankful. Develop a program that will input the miles driven and gallons used for each tankful.
The program should calculate and display the miles per gallon obtained for each tankful. After processing all input information, the program should calculate and print the combined miles per gallon
obtained for all tankfuls. Here is a sample input/output dialog:*/

//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main(){
	float gallons = 0;
	float miles = 0;
	float tank = 0;
	
	float total_gallons = 0;
    float total_miles = 0;
    float average;	 

	while (1){
		
		printf("Enter the gallons used (-1 to end): ");
		scanf("%f", &gallons);

		if (gallons == -1) break;

		printf("\nEnter the miles driven: ");
		scanf("%f", &miles);
		
		total_gallons += gallons;
        total_miles += miles;
		
		tank = (float)miles / gallons;
		printf("\nThe miles/gallon for this tank was %.6f\n\n", tank);
	}
	
	average =  total_miles/total_gallons;
	printf("\nThe overall average miles/gallon was %f\n", average);
	return 0;
}
