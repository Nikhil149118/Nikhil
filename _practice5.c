#include<stdio.h>

int main(){
    int P,T;
    float R;
    printf("write the value of P\n");
    scanf("%d" ,&P);
    printf("write the value of R\n");
    scanf("%f" , &R);
    printf("write the value of T\n");
    scanf("%d", &T);
 float simpleinterest = (P*R*T)/100 ;
    printf("The SI is given as %f $\n" , simpleinterest);
    return 0;
}