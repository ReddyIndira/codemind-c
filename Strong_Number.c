
#include<stdio.h>
int main()
{
    int n,temp,r,fact,sum=0,i;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=r;i>=1;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}
