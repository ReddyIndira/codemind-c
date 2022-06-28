#include<stdio.h>
int main()
{
    int n,i,j,c=0,f=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            f++;
            printf("%d ",arr[i]);
            arr[i]=0;
        }
    }
    if(f==0)
    {
        printf("%d",-1);
    }
}