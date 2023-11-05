// C Code for a random number guessing game. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));

    const int MIN, MAX;

    printf("Enter the least number: ");
    scanf("%d",&MIN);

    printf("Enter the highest number: ");
    scanf("%d",&MAX);

    answer = (rand() % (MAX - MIN + 1)) + MIN;

    do{
        printf("Enter a guess: ");
        scanf("%d",&guess);
        if(guess < answer){
            printf("Too low!\n");
        } else if(guess > answer){
            printf("Too high!\n");
        } else {
            printf("\n\nCORRECT!\n");
        }

        guesses++;
    } while( guess != answer );
    printf("*******************\n");
    printf("Answer: %d\n",answer);
    printf("Number of guesses: %d\n",guesses);
    printf("*******************\n");
}