#include<stdio.h>
int main()
{
    int n,arr[100],s,max=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            s=arr[j]-arr[i];
            if(max<s)
            {
                max=s;
            }
        }
    }
    printf("%d",max);
}