#include<stdio.h>
int main()
{
    int n,arr[100],i,a,b,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a ||arr[i]>b)
        {
            f=1;
            printf("%d ",arr[i]);
        }
    }
    if(f==0)
    {
        printf("%d",-1);
    }
}