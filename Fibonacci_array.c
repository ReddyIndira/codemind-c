#include<stdio.h>
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<3)
    {
        printf("no");
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(a[i]!=a[i-1]+a[i-2])
            {
                printf("no");
                return 0;
            }
        }
        printf("yes");
    }
}