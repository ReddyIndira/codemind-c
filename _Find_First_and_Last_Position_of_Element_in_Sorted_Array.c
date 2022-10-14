#include<stdio.h>
int main()
{
    int n,arr[100],i,m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<=n;i++)
    {
        if(arr[i]==m)
        {
            printf("%d ",i);
            c++;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==m)
        {
            printf("%d",i);
            break;
        }
    }
    if(c==0)
    {
        printf("%d %d",-1,-1);
    }
}