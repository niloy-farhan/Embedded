//
//  main.c
//  greatestCommonDivisior
//
//  Created by Niloy Farhan on 29/11/23.
//

#include <stdio.h>

unsigned int DivisorData(unsigned int a, unsigned int b);

int main(int argc, const char * argv[]) {
    
    unsigned int a = 0;
    unsigned int b = 0;
    printf("Enter 1st number: ");
    scanf("%u", &a);
    printf("Enter 2nd number: ");
    scanf("%u", &b);
    
    int gcd = DivisorData(a, b);
    
    printf("%d\n", gcd);
    
    return 0;
}


unsigned int DivisorData(unsigned int a, unsigned int b) {
        while (b != 0) {
            unsigned int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    
};

