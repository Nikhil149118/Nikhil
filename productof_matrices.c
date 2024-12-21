#include<stdio.h>
#include<conio.h>
void main(){
    int m=2,n=3,p=4,q=2,r=3,s=4,i,j,k;
    int a[m][n][p];
    printf("enter values of array");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<p;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<p;k++)
            {
                printf("the array elements at a[%d][%d][%d]=%d\n",i,j,k,a[i][j][k]);
            }
        }
    }
    
}