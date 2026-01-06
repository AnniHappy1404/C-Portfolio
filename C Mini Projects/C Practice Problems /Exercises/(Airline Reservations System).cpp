/*6.21 (Airline Reservations System) A small airline has just purchased a computer for its new automated reservations system. The president has asked you to program the new system. You’ll write
a program to assign seats on each flight of the airline’s only plane (capacity: 10 seats).
Your program should display the following menu of alternatives:
Please type 1 for "first class"
Please type 2 for "economy"
If the person types 1, then your program should assign a seat in the first class section (seats 1–
5). If the person types 2, then your program should assign a seat in the economy section (seats 6–
10). Your program should then print a boarding pass indicating the person's seat number and
whether it’s in the first class or economy section of the plane.
Use a one-dimensional array to represent the seating chart of the plane. Initialize all the elements of the array to 0 to indicate that all seats are empty. As each seat is assigned, set the corresponding element of the array to 1 to indicate that the seat is no longer available.
Your program should, of course, never assign a seat that has already been assigned. When the
first class section is full, your program should ask the person if it’s acceptable to be placed in the
economy section (and vice versa). If yes, then make the appropriate seat assignment. If no, then
print the message "Next flight leaves in 3 hours."*/

//PHAM NGUYEN HOANG TUAN

#include<stdio.h>

int main(){
    int seats[10] = {0};
    int choose;
    int count1 = 0, count2 = 0, count = 0;
    
    while(count < 10){
        printf("\nChoose: 1 (First Class) or 2 (Economy): ");
        if (scanf("%d", &choose) != 1) break;

        int assigned = 0;

        if (choose == 1) {
            if (count1 < 5) {
                for(int i = 0; i < 5; i++) {
                    if(seats[i] == 0) {
                        seats[i] = 1;
                        count1++; count++; assigned = 1;
                        printf("Boarding Pass: Seat %d (First Class)\n", i + 1);
                        break;
                    }
                }
            } else {
                printf("First Class is full. Switch to Economy? (y/n): ");
                char change; scanf(" %c", &change);
                if (change == 'y' && count2 < 5) {
                    for(int j = 5; j < 10; j++) {
                        if(seats[j] == 0) {
                            seats[j] = 1; // Ð?i t? 9 thành 1
                            count2++; count++; assigned = 1;
                            printf("Boarding Pass: Seat %d (Economy)\n", j + 1);
                            break;
                        }
                    }
                } else printf("Next flight leaves in 3 hours.\n");
            }
        } 
        else if (choose == 2) {
            if (count2 < 5) {
                for(int i = 5; i < 10; i++) {
                    if(seats[i] == 0) {
                        seats[i] = 1;
                        count2++; count++; assigned = 1;
                        printf("Boarding Pass: Seat %d (Economy)\n", i + 1);
                        break;
                    }
                }
            } else {
                printf("Economy is full. Switch to First Class? (y/n): ");
                char change; scanf(" %c", &change);
                if (change == 'y' && count1 < 5) {
                    for(int j = 0; j < 5; j++) {
                        if(seats[j] == 0) {
                            seats[j] = 1;
                            count1++; count++; assigned = 1;
                            printf("Boarding Pass: Seat %d (First Class)\n", j + 1);
                            break;
                        }
                    }
                } else printf("Next flight leaves in 3 hours.\n");
            }
        }
        printf("Current status: ");
        for (int m = 0; m < 10; m++) printf("[%d]", seats[m]);
        printf("\n");
    }
    
    printf("\n\nAirline Reservations System: ON BOARD\n\n");
    return 0;
}
