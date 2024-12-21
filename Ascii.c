#include<stdio.h>
#include<conio.h>
int main(){
    int x=20,z,t;
    char y='A', w='a';
    z=x+y;// the answer will be x+65 bcz the ascii value of A is 65
    t=w+x;// the answer will be x+97 bcz the ascii value of a is 97
    printf("%d\n",z);
    printf("%d",t);
    return 0;
}