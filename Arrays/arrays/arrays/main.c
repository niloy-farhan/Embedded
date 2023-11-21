//
//  main.c
//  arrays
//
//  Created by Niloy Farhan on 21/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int grades[10];
    int count = 10;
    long sum = 0;
    float avarage = 0.0f;
    
    printf("\nEnter the 10 Grades: \n");
    
    for(int i = 0; i < count; ++i){
        printf("%u> ", i + 1 );     //%u unsigned format specifire
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    
    avarage = (float)sum/count;
    
    printf("\nAvarage of the ten grades entered is: %.2f\n\n", avarage);
    
    
    return 0;
}
