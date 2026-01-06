/*(Guess the Number Modification) Modify the program of Exercise 5.32 to count the number of guesses the player makes. If the number is 10 or fewer, print Either you know the secret or
you got lucky! If the player guesses the number in 10 tries, then print Ahah! You know the secret!
If the player makes more than 10 guesses, then print You should be able to do better! Why should
it take no more than 10 guesses? Well, with each “good guess” the player should be able to eliminate
half of the numbers. Now show why any number 1 to 1000 can be guessed in 10 or fewer tries*/

//PHAM NGUYEN HOANG TUAN

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess;
    int random_number;
    char play_again;
    unsigned int count;

    srand((unsigned int)time(NULL));

    do {
        random_number = 1 + rand() % 1000;
		count = 0;
		printf("-------------------------------------\n");
		printf("I have a number: %d\n", random_number);
        printf("-------------------------------------\n");

        printf("\nI have a number between 1 and 1000.\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess.\n");

        while (1) {
            printf("Guess: ");
            if (scanf("%d", &guess) != 1) {
                printf("Invalid input! Please enter a number.\n");
                while(getchar() != '\n');
                continue;
            }
			count++;
            if (guess == random_number) {
                printf("Excellent! You guessed the number!\n");
                if (count < 10){
                	printf("Number of guesses the player makes: %u\n", count);
                	printf("Either you know the secret or you got lucky!\n");
				} else if (count == 10){
                	printf("Number of guesses the player makes: %u\n", count);
                	printf("Ahah! You know the secret!\n");
            	} else if (count > 10){
                	printf("Number of guesses the player makes: %u\n", count);
                	printf("You should be able to do better! \n");
            	}
            break;
            } else if (guess < random_number) {
                printf("Too low. Try again.\n");
            } else {
                printf("Too high. Try again.\n");
            }
        }

        do {
            printf("Would you like to play again (y or n)?: ");
            scanf(" %c", &play_again);
            
            if (play_again != 'y' && play_again != 'Y' && play_again != 'n' && play_again != 'N') {
                printf("Invalid input! Please type 'y' for Yes or 'n' for No.\n");
            }
        } while (play_again != 'y' && play_again != 'Y' && play_again != 'n' && play_again != 'N');

    } while (play_again == 'y' || play_again == 'Y');
	printf("Thank you for playing!\n");
    printf("Goodbye!\n");
    return 0;
}
