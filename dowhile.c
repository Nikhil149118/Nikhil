#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,i,choice;
    
    do{
        printf("enter any number\n");
    scanf("%d%d",&a,&b);
        printf("sum=%d\n",a+b);
        printf("do you want to continue?");
        printf("select 1 for YES/ 2 for NO\n");
        scanf("%d",&choice);
    }
    while(choice==1);
}