//
//  main.c
//  exercise2
//
//  Created by Niloy Farhan on 26/11/23.
//

#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main(int argc, const char * argv[]) {
    
    double data[YEARS][MONTHS] = {
        
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
        
    };
    
    int y, m;
    float subtot, total;
    
    printf("YEAR\t\tRAINFALL (inches)\n");
    
    for (y = 0, total = 0; y < YEARS; y++) {
        for(m = 0, subtot = 0; m < MONTHS; m++){
            subtot += data[y] [m];
        }
        
        printf("%5d \t\t%.1f\n", 2019 + y, subtot);
        total += subtot;
    }
    
    printf("\nThe yearly avarage is %.1f inches. \n\n", total/YEARS);
    return 0;
}
