#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  int randomNumber = 0;
  int guess = 0;
  int maximunNumberOfGuess = 5;
  tiem_t t;

  srand((unsigned) time(&t));

  randomNumber = rand() % 21;

  scanf("Enter a number: %d", & number);

  return 0;
}
