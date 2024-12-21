#include<stdio.h>
void main(){
    int a=0,b=1,c,i,n;
    printf("enter the limit of fabonacci series");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=1;i<=n-2;i++)
    {
c=a+b;
a=b;b=c;
printf("%d\n",c);
    }
}