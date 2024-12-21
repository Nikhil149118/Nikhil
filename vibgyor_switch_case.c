#include<stdio.h>
#include<string.h>
void main(){
    char ch;
    printf("enter any character from VIBGYOR(vibgyor)\n");
    scanf("%c",&ch);
    switch(ch){
        case 'v':
        case 'V':
        printf("Violet");
        break;
        case 'i':
        case 'I':
        printf("Indigo");
        break;
        case 'b':
        case 'B':
        printf("Blue");
        break;
        case 'g':
        case 'G':
        printf("Green");
        break;
        case 'y':
        case 'Y':
        printf("Yellow");
        break;
        case 'o':
        case 'O':
        printf("Orange");
        break;
        case 'r':
        case 'R':
        printf("Red");
        break;
        default:
        printf("this is not a Rainbow colour");
    }
}