#include<stdio.h>
#include<conio.h>
long int fact(int n);
void main()
{
    int num;
    printf("\n enter number to get its factorial. ");
    scanf("%d",&num);
    printf("factorial=%ld",fact(num));
}
long int fact(int n)
{
    if(n==0||n==1)
    return(1);
    else
    return(n*fact(n-1));
}