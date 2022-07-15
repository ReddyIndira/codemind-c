#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=1,k=0,max=arr[0],min=999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
            if(c==arr[i])
            {
                if(max<arr[i])
                {
                    max=arr[i];
                }
                if(min>arr[i])
                {
                    min=arr[i];
                }
                k++;
            }
        }
    }
    if(k==0)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d %d ",min,max);
    }
}