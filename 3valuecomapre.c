//WAP to find into 3 values by using logical operator
void main()
{
    int a, b, c;
    printf("enter 3 values to be compared");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("first value is greatest");
    }
 if(b>c && b>a){
printf("second value is greatest");
 }
 if(c>a && c>b){
    printf("third value is greatest");
 }
    return 0;
}