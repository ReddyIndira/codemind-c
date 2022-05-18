#include<stdio.h>
int main()
{
    int n,arr[100],c=0,t,i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        c=0;
        t=arr[i];
        while(t!=0)
        {
            c++;
            d=t%10;
            t=t/10;
        }
        if(arr[i]==0)
        {
            c=1;
        }
        printf("%d ",c);
    }
}