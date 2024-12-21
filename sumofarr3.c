#include<stdio.h>
#include<conio.h>
void main(){
    int m=1,n=3,p=3,sum1=0,sum2=0,sum3=0,i,j,k;
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
    printf("entered array is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<p;k++)
            {
                printf("%d\t",a[i][j][k]);
            }
            printf("\n");
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<p;k++)
            {
                if(j==0)
                sum1+=a[i][j][k];
            }
            
        }
    }
    printf("sum of 1 line is %d\n",sum1);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<p;k++)
            {
                if(j==1)
                sum2+=a[i][j][k];
            }
            
        }
    }
    printf("sum of 2nd line is %d\n",sum2);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<p;k++)
            {
                if(j==2)
                sum3+=a[i][j][k];
            }
            
        }
    }
    printf("sum of 3rd line is %d\n",sum3);
    printf(" total sum is %d",sum1+sum2+sum3);

}   