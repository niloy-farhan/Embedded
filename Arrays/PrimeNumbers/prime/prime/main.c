//
//  main.c
//  prime
//
//  Created by Niloy Farhan on 20/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int p = 2;
    
    for(int i = 2; i<=100; i+=2) {
        for (int j = 2; j<=100; j+=2) {
            int check = i % j;
            
            printf("%d", check);
        }
    }
    
    
    
    return 0;
}
