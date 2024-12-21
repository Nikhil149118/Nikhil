#include<stdio.h>
void main(){
    int i,c,a=0,b=1;
    printf("%d\n%d\n",a,b);
    for(i=1;i<=5;++i)
    {
      c=a+b;
      a=b;
      b=c;
      printf("%d\n",c);
    }
}