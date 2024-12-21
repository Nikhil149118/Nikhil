#include <stdio.h>
#include <conio.h>
void main()
{
    int m=1,n=3,p=3,sum1 = 0, sum2 = 0, sum3 = 0,j, k;
    int a[n][p];
    printf("enter values of array");

    for (j = 0; j < n; j++)
    {
        for (k = 0; k < p; k++)
        {
            scanf("%d", &a[j][k]);
        }
    }

    printf("entered array is:\n");

    for (j = 0; j < n; j++)
    {
        for (k = 0; k < p; k++)
        {
            printf("%d\t", a[j][k]);
        }
        printf("\n");
    }

    for (j = 0; j < n; j++)
    {
        for (k = 0; k < p; k++)
        {
            if (j == 0)
            {
                sum1 += a[j][k];
                if (k == (p-1))
                {
                    printf("sum of first line %d\n", sum1); 
                }
            }

            if (j == 1)
            {
                sum2 += a[j][k];
                if (k == (p-1))
                {
                    printf("sum of second line %d\n", sum2);
                }
            }
            if (j == 2)
            {
                sum3 += a[j][k];
                if (k == (p-1))
                {
                    printf("sum of 3rd line %d\n", sum3);
                }
            }
        }
        printf("\n");
        
    }
    printf("total sum is %d",sum1+sum2+sum3);
    // printf("sum of first line %d\n",sum1);
    /*    for(j=0;j<n;j++)
       {
           for(k=0;k<p;k++)
           {

               if(j==1)
               sum2+=a[j][k];
           }
           printf("\n");
       }
       printf("sum of 2nd line %d\n",sum2);
       for(j=0;j<n;j++)
       {
           for(k=0;k<p;k++)
           {

               if(j==2)
               sum3+=a[j][k];
           }
           printf("\n");
       }
       printf("the sum  of 3rd line is %d\n",sum3);
       printf("sum of total is %d\n",sum1+sum2+sum3);*/
}