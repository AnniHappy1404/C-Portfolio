/*(Guess the Number) Write a C program that plays the game of “guess the number” as follows: Your program chooses the number to be guessed by selecting an integer at random in the range
1 to 1000. The program then types:
The player then types a first guess. The program responds with one of the following:
If the player’s guess is incorrect, your program should loop until the player finally gets the number
right. Your program should keep telling the player Too high or Too low to help the player “zero in”
on the correct answer. [Note: The searching technique employed in this problem is called binary
search. We’ll say more about this in the next problem.]*/

//PHAM NGUYEN HOANG TUAN

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int guess;
	int random_in_range;
	char play_again;
	srand((unsigned int)time(NULL));

	game:
	random_in_range = 1 + rand() % (1000 - 1 + 1);
	printf("------------------------------------------------\n");
    printf("Random number (1 - 1000): %d\n", random_in_range);
	printf("------------------------------------------------\n");

	printf("I have a number between 1 and 1000.\n");
	printf("Can you guess my number?\n");
	
    while (1){
    	printf("Please type your guess.\n");
    	if (scanf("%d", &guess) != 1) {
                printf("Please enter a valid number!\n");
                while(getchar() != '\n');
                continue;
            }
    	if (random_in_range == guess){
    		printf("Excellent! You guessed the number!\n");
    		printf("Would you like to play again (y or n)?: ");
			play_again:
			scanf(" %c", &play_again);
    		if (play_again == 'y'||play_again == 'Y'){
    			goto game;
			} else if ( play_again == 'n'||play_again == 'N'){
			printf("Thank you for playing!\n");
			break;
			} 
			else {
				printf("Please enter (y or n)!: ");
				while(getchar() != '\n');
				goto play_again;
			}
		} else if (guess < random_in_range){
			printf("Too low. Try again.");
			continue;
		} else if (guess > random_in_range){
			printf("Too high. Try again.");
			continue;
		}
	}
    return 0;
}
