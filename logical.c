#include<stdio.h>
void main(){
int n1,n2,n3,n4,_and,_or,_not1,_not2;
printf("Enter four values");
scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
_and=(n1<n2)&&(n3>n4);
_or=(n1<n2)||(n3<=n4);
_not1=(!n1);
_not2=!(n1<n2);
printf("the results are");
printf("\n(%d<%d)&&(%d>%d)=%d",n1,n2,n3,n4,_and);
getch();
}