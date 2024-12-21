#include<stdio.h>
void main(){
    int i,k=0,n;
    printf("enter number to get sum from 1 to the number");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        k=i+k;
    }
    printf("%d",k);
}