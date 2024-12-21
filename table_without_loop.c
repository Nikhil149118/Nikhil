#include<stdio.h>
#include<stdlib.h>
void main(){
    int i=1,n;
   printf("enter number to get its table");
   scanf("%d",&n);
   i:
   printf("%d\n",n*i);
   i++;
   if(i==11){
    exit(0);
   }
   goto i;

}