#include<stdio.h>
int main()
{
    int n,arr[100],i,j,max=0,c=0,f=0;
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
            if(arr[i]==arr[j]&& i!=j )
            {
                c++;
            }
        }
        if(c==0)
        {
            if(max<arr[i])
            {
                max=arr[i];
                f=1;
            }
        }
    }
    if(f==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d",max);
    }
}
