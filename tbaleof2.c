/*void main(){
    int i;
    for(i=1;i<=10;++i)
    {
        
        printf("%d*2=%d\n",i,i*2);
    }
}*/
void main(){
    int a,i;
    printf("Enter value whose table is to be written");
    scanf("%d",&a);
    for(i=1;i<=10;++i)
    {
        printf("%d*%d=%d\n",i,a,i*a);
    }
}