#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum=sum+arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        sum1=sum1+arr[i];
    }
    printf("%d",abs(sum-sum1));
}