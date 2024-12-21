#include<stdio.h>
#include<conio.h>
void main(){
    float a,b;
    int choice;
    printf("1.ADD\n 2.MUL\n 3.DIV\n 4.SUB\n");
    printf("enter first value");
    scanf("%f",&a);
    printf("enter 2nd value");
    scanf("%f",&b);
    printf("enter your choice from above\n");
    scanf("%d",&choice);
    if(choice==1){
        printf("sum is %f",a+b);
    }
    else if(choice==2){
        printf("multiplication is %f",a*b);
    }
    else if(choice==3){
        printf("division is %f",a/b);
    }
    else if (choice==4){
        printf("subtraction is %f",a-b);
    }
    else{
        printf("wrong choice");
    }
    getch();
}