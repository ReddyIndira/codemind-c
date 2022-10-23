#include<stdio.h>
int main()
{
    int n,s=0,l=0,x=0,d;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        x+=1;
        if(d%2==0)
        {
            s+=1;
        }
        else
        {
            l+=1;
        }
    }
    if(s==x)
    {
        printf("Even");
    }
    else if(x==l)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}