#include<stdio.h>
int main()
{
    long long int a,b,s=0,i;
    scanf("%lld %lld",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    if(s==b)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}