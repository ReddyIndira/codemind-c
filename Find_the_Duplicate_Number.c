#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d",arr[i]);
            break;
        }
    }
    
}