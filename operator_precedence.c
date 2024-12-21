#include<stdio.h>

int main(){
    int x=1;
    int d=1;
    printf("the value of 3x-4d is %d\n",3*x-4*d);
    printf("the value of 8x/4d*6x is %d\n", 8*x/4*d*6*x);
    
// BODMAS is not followed here but associativity is followed
//  in * / it is followed in left to right order
    return 0;
}