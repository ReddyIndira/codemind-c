#include<stdio.h>
int main()
{
    int n,a[10],b[10],i,j,c[10],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                c[k]=a[i]+b[j];
            }
        }
        printf("%d ",c[k]);
    }
}