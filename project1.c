#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, Guess, ngusses=1;
    srand (time(0)); //for random number generation
    number = rand()%100 +1;  // Generates a random number between 1 and 100
    //printf("The number is %d", number);
    //keep runing the loop until the number is gussed
    do{
        printf("Guess the between 1 to 100\n");
        scanf("%d", &Guess);
        if(Guess>number){
            printf("Lower number plese\n");
        }
        else if(Guess<number){
            printf("Higher nuumber plese\n");

        }
        else{
            printf("You Guessed in %d attempts\n", ngusses);
        }
        ngusses++;
    }
    while(Guess!=number);
    return 0;
}
