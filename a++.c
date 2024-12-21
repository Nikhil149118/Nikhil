/*#include<stdio.h>
#include<conio.h>

int main(){
    int a=4,c;
   // printf("%d\n",a++);// a will print its value and then increased by 1 & called postincrement.
   // printf("%d\n",a);//a will give increased value by 1
   // printf("%d\n",++a);// a will give a increased value by 2 & called preincrement.
    // similarly we can do it for - sign for e.g. and also it differ with pre and post applying.
  //  printf("%d",--a);// it shows predecrement & a-- shows postdecrement.
  printf("%d\n",a);
   c= ++a+a;
   printf("%d\n",c);
   printf("%d",a);
    return 0;
}//note: if value is not assigned to any variable then the incremented value is printed.*/
#include<stdio.h>
void main(){
  int a=15;
  a++;
  ++a;
  a--;
  printf("%d",a++);
  printf("\n%d",++a);
  printf("\n%d",a);
}
 