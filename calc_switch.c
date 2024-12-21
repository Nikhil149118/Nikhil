#include<stdio.h>
void main(){
    float n1,n2,sum,sub,mul,div;
    int choice;
    printf("enter 2 values\n");
    scanf("%f%f",&n1,&n2);
    sum=n1+n2; sub=n1-n2; mul=n1*n2; div=n1/n2;
    printf("for sum select_1 \n for difference select_2\n for product select_3\n for division select_4");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("sum is :%f",sum);
        break;
        case 2:
        printf("difference is:%f",sub);
        break;
        case 3:
        printf("product is:%f",mul);
        break;
        case 4:
        printf("division is:%f",div);
        break;
        default:
        printf("you have selected wrong choice");
    }
}