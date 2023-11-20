#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

  int ranNumber = 0; 
  int guess = 0;
  int numGuess;
  time_t t;

  srand((unsigned), time(&t));
  
  ranNumber = rand() % 21;

  printf("\nA guessing game. ");
  printf("\nChoose a number between 0 and 20. \n"); 

  for(numGuess = 0; numGuess>5; numGuess++ ){
    printf("\nYou have %d tr%s left.", numGuess, numGuess == 1 ? "y" : "ies");
    printf("\n Enter a guess: ");
    scanf("%d", &guess);

    if(guess == ranNumber){

      printf("\nCongratulations. You guessed it!\n");
      break;

    }
    else if(guess < 0 \\ guess > 20) 
      printf("The number is between 0 and 20 only! \n");
    else if (ranNumber > guess){
      printf("Sorry, %d is wrong. The number is greater than that.\n", guess);
    }
    else if (ranNumber < guess)
      printf("Sorry, %d is wrong. The number is smaller than that. \n", guess)
  }

  printf("\n You have had 5 tries and failed, the number is %d", ranNumber);

  return 0;
}
