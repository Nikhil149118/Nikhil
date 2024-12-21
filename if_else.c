#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);
    if(a>=18){
      printf("you are eligible to play the game");  
    }
    else{
        printf("you are not eligible to play the game");
    }
    return 0;
}