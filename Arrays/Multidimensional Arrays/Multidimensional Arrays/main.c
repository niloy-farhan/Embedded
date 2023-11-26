//
//  main.c
//  Multidimensional Arrays
//
//  Created by Niloy Farhan on 26/11/23.
//

#include <stdio.h>

#define X 3  // Size of the first dimension
#define Y 4  // Size of the second dimension
#define Z 5  // Size of the third dimension

int main() {
    // Declare a three-dimensional array
    int threeDArray[X][Y][Z];

    // Initialize the elements of the array
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                threeDArray[x][y][z] = x * Y * Z + y * Z + z;
            }
        }
    }

    // Access and print the elements of the array
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                printf("threeDArray[%d][%d][%d] = %d\n", x, y, z, threeDArray[x][y][z]);
            }
        }
    }

    return 0;
}
