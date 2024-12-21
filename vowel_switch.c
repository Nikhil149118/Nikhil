#include<stdio.h>
#include<string.h>
void main(){
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    switch(ch){
        case'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("\nvowel is entered");
        break;
        default:
        printf("\nconsonant");
        

    }

}