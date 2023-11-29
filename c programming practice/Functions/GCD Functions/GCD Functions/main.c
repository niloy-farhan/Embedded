//
//  main.c
//  GCD Functions
//
//  Created by Niloy Farhan on 29/11/23.
//

#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);
float absoluteValue (float x);

int main(int argc, const char * argv[]) {
    
    int result = 0;
    
    result = gcd(150, 23);
    printf("The gcd of 1500 and 25 is %d\n", result);
   
    return 0;
}

int gcd(int u, int v) {
    int temp;
    
    while(v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

float absoluteValue(float x){
    if (x < 0)
        x = -x;
    return x;
}
