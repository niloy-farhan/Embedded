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
    printf("f1 = %.2f\n\n\n", f1);
    
    result = gcd(150, 23);
    printf("The gcd of 1500 and 25 is %f\n\n\n", result);
    
    /*Testing squareRoot*/
  
    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(24.0));
    printf("%.2f\n", squareRoot(36.0));
    printf("%.2f\n", squareRoot(165.0));
   
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
    float returnValue = 0.0;
    
    if (x < 0) {
        printf("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    
    if (returnValue != -1.0) {
        
        while ( absoluteValue(guess * guess -x) >= epsilon)
            guess = (x / guess + guess) / 2.0;
        
        returnValue = guess;
    }
    
    return returnValue;
}
