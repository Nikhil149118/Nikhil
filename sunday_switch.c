 #include<stdio.h>
void main(){
    int n1;
    printf("select anyone number from 1 to 7 to print consecutive days of a week \n");
    scanf("%d",&n1);
    switch(n1){
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday(Rest_day)");
        break;
        default:
        printf("you have selected a wrong number");
    }
}