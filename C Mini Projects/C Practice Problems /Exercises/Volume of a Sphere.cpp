/*(Volume of a Sphere) Write a program that defines a macro with one argument to compute
the volume of a sphere. The program should compute the volume for spheres of radius 1 to 10 and
print the results in tabular format. The formula for the volume of a sphere is
(4.0 / 3) * pi * r3
where pi is 3.14159.*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>

// Defining the macro
#define PI 3.14159
#define sphere(x) ( (4.0 / 3) * (PI) * ((x)*(x)*(x)) )

int main() {
    float x;
	printf("%-10s | %-15s\n", "Radius", "Volume");
    printf("----------------------------\n");	
	for (int i = 1; i <=10; i++){
		x = (float)i;
		printf("%-10.0f | %-15.2f\n", x, sphere(x));	
		}
    return 0;
}
