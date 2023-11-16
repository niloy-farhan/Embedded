#include <stdio.h>
#include <stdlib.h>

int main(){

  double width = 23.3;
  double height = 15.4;
  double perimeter = 0.0;
  double area = 0.0;

  perimeter = 2.0 *(height+width);
  area = width * height;

  printf(" Width is %f, Height is %f, Perimeter is: %f\n", width, height, perimeter);
  printf("Area is: %f\n", area);

  return 0;

}
