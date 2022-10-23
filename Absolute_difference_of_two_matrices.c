#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100][100],brr[100][100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            printf("%d ",abs(arr[i][j]-brr[i][j]));
        }
        printf("%d
",abs(arr[i][j]-brr[i][j]));
    }
}