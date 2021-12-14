#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int number,guess,nGuess = 1;
    srand(time(0));
    number = rand()%100 + 1;
    //printf("Number = %d", number);

    do {
        
        printf("Guess the number between 1 to 100 = ");
        scanf("%d", &guess);
        if(guess>number) {

            printf("Lower the number\n");

        }

        else if(guess<number) {

            printf("Higher the number\n");

        }

        else{

            printf("You guessed it in %d\n",nGuess);

        }
        nGuess++;

    }while(guess!=number);

}