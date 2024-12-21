#include<stdio.h>
#include<conio.h>
void main(){
    float a,b,c;
    printf("enter a number");
    scanf("%f",&a);
    printf("enter second number");
    scanf("%f",&b);
    printf("enter 3rd number");
    scanf("%f",&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("these can form a valid triangle");
    }
    else {
        printf("these can't form a valid triangle");
    }

    getch();
}