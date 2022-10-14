#include<stdio.h>
int main()
{
    int n,arr[100],i,m,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            printf("%d",i);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}