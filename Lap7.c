##include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playGame, guess, targetNumber, score;
    
    srand(time(NULL));

    while (1) {
        
        printf("Do you want to play game (1=play, -1=exit) : ");
        scanf("%d", &playGame);

        if (playGame == -1) {
            printf("Goodbye!\n");
            break;
        } else if (playGame == 1) {
            
            score = 100;
            targetNumber = rand() % 100 + 1;

            printf("(Score=%d)\n", score);

            
            while (1) {
                printf("Guess the winning number (1-100): ");
                scanf("%d", &guess);

                if (guess == targetNumber) {
                    printf("That is correct! The winning number is %d.\n", targetNumber);
                    printf("Score this game: %d\n", score);
                    break;
                } else {
                    score -= 10;  

                    if (score <= 0) {
                        printf("Sorry, you've run out of points. The correct number was %d.\n", targetNumber);
                        break;
                    }

                    
                    if (guess < targetNumber) {
                        printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                    } else {
                        printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                    }
                }
            }
        } else {
            printf("Invalid input! Please enter 1 to play or -1 to exit.\n");
        }
    }

    return 0;
}
