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
float squareRoot (float x);

int main(int argc, const char * argv[]) {
    
    double result = 0;
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult = 0.0;
    
    /* testing absolute value function*/
    result = absoluteValue(f1);
    printf("result = %.2f\n", result);
    printf("f1 = %.2f\n", f1);
    
    result = gcd(150, 23);
    printf("The gcd of 1500 and 25 is %f\n", result);
   
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

float squareRoot(float x) {
    const float epsilon = .000001;
    float guess = 1.0;
    
    if (x < 0) {
        printf("Negative argument to squareRoot.\n");
        return -1.0;
    }
    
    while ( absoluteValue(guess * guess -x) >= epsilon)
        guess = (x / guess + guess) / 2.0;
    
    return guess;
}
