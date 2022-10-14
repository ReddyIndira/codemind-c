#include<stdio.h>
int main()
{
    int n,arr[100],i,j,l,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                s=s*arr[j];
            }
        }
        printf("%d ",s);
    }
}