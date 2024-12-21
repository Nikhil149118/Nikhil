#include<stdio.h>
// program for divisiblity check by 53
int main(){
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    printf("divisiblity test returns: %d\n",num%53);
    // remainder is zero hence the number is not divisible by 53

    return 0;
}