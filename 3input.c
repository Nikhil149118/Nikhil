#include<stdio.h>
int main(){
int a,b;
printf("Enter the value of a\n");
scanf("%d",&a);
// & is the address of a as well as b i.e. where a,b is to be stored in memory
printf("Enter the value of b\n");
scanf("%d", &b);

printf("the sum of a and b is %d\n" ,a+b);
return 0;
}