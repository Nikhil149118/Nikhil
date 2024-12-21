//WAP to calculate percentage of 5 subjects when marks are given.
#include<stdio.h>
#include<conio.h>
void main(){
    float sub1,sub2,sub3,sub4,sub5,sum,percentage;
  printf("please enter each subject's marks one by one");
  scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
sum=sub1+sub2+sub3+sub4+sub5;
percentage=(sum/500)*100;
printf("percentage=%f\n",percentage);
getch();
}
