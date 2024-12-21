#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char name[20];//string is not written as datatype but CHAR CHARACTERNAME[NO.OF LETTERS] is used
    printf("Enter your name\n");
    gets(name);
    // puts(name); // we can't write sentences in puts as in printf.
    printf("Your name is:%s\n",name);//use anyone of the puts/printf function to print 
    getch();

}