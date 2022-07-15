#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=1,s=0;
    float avg,k;
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
                k++;
                s=s+arr[i];
            }
        }
    }
    if(k==0)
    {
        printf("%d",-1);
    }
    else
    {
        avg=s/(k);
        printf("%.2f",avg);
    }
}
