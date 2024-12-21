#include<stdio.h>
void main(){
    int a,i,n=1;
    printf("enter any number to get factorial");
    scanf("%d",&a);
    for(i=1;i<=a;++i)
    {
     n=n*i;
    }
    printf("%d",n);
}