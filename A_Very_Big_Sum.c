#include<stdio.h>
int main()
{
    int n,arr[100],i;
    long int s=0;
    scanf("%d",&n);
    if(n>=1 && n<=10)
    {
        long long int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            s=s+arr[i];
        }
        printf("%ld",s);
    }
}