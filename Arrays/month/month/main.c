//
//  main.c
//  month
//
//  Created by Niloy Farhan on 26/11/23.
//

#include <stdio.h>
#define MONTHS 12

int main(int argc, const char * argv[]) {
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    
    for (index = 0; index < MONTHS; index++){
        printf("Month %d has %2d.\n", index+1, days[index]);
    }
    
    return 0;
}
