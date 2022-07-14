#include<stdio.h>
int main()
{
    int n,i,j,temp,rev=0,c=0,d,k=0;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(temp!=0)
        {
            d=temp%10;
            rev=rev*10+d;
            temp=temp/10;
        }
    for(j=1;j<=rev;j++)
    {
        if(rev%j==0)
        {
            k++;
        }
    }
    }
    if(k==2 && c==2)
    {
        printf("circular prime");
    }
    else if(c==2 && k!=2)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}

   