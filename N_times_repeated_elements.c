#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=1,f=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=1;
        if(arr[i]!=-1)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    c++;
                    arr[j]=-1;
                }
            }
            if(c==k)
            {
                printf("%d ",arr[i]);
                f=1;
            }
        }
    }
    if(f==0)
    {
        printf("%d",-1);
    }
}
    