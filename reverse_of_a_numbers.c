#include<stdio.h>
int main()
{
    int n,t,rev=0,d;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        d=t%10;
        t=t/10;
        rev=rev*10+d;
    }
    printf("%d",rev);
}