#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k!=0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}