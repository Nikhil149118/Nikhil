// these are also called *SCOPE OF VARIABLES*
// there are 4 types of variables-1.AUTOMATIC(auto) 2.STATIC(static)
// 3.EXTERNAL(extern) 4.REGISTER(register) i.e. on register memory
#include<stdio.h>
#include<conio.h>
#include<string.h>
extern int a=4; // can be used everywhere i.e. Global--- default value is 0.
void main(){
printf("%d",a);
getch();


}