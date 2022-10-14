#include<stdio.h>
int main()
{
    int n,arr[100],i,m1=-1,m2=-1,m3=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(m1<arr[i])
        {
            m1=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(m2<arr[i] && arr[i]!=m1)
        {
            m2=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(m3<arr[i] && arr[i]!=m1 && arr[i]!=m2)
        {
            m3=arr[i];
        }
    }
    if(m3==-1)
    {
        printf("%d",m1);
    }
    else
    {
        printf("%d",m3);
    }
}
         