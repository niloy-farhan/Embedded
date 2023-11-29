#include <stdio.h>
#include <stdbool.h>

int main() {

  enum charracter {nn, cnn};

  enum charracter myCharacter = nn;

  enum charracter anotherCharrecter = cnn;

  bool bl = (myCharacter = anotherCharrecter);

  printf("%d", bl);

  return 0;
}
