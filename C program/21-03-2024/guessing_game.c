/*Guessing Game:
Write a program that generates a random number between 1 and 100. 
Prompt the user to guess the number. 
Keep prompting the user until they guess the correct number. 
Provide hints such as "Too high" or "Too low". Use a do-while loop for the guessing game.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, user_guess;
    srand(time(NULL)); 
    number_to_guess = rand() % 100 + 1;

    printf("Welcome to the Guessing Game!\n");
    printf("I've picked a number between 1 and 100. Can you guess it?\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        if (user_guess < number_to_guess) {
            printf("Too low. Try again!\n");
        } else if (user_guess > number_to_guess) {
            printf("Too high. Try again!\n");
        } else {
            printf("Congratulations! You've guessed the correct number: %d\n", number_to_guess);
        }
    } while (user_guess != number_to_guess);

    return 0;
}
