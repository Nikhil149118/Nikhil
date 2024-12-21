#include <stdio.h>
#include <conio.h>
void main()
{  char k;  
    printf("enter alphabet\n");
    scanf("%c", &k);
    if (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u' || k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    getch();
}