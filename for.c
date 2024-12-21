#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,j,n=5;
 for(i=1;i<=n;i++){
   for(j=5;j>n;j--){
      printf(" ");
   }
   for(int k=1;k<=n+1-i;k++)
{   printf("*");}
printf("\n");

 }

}