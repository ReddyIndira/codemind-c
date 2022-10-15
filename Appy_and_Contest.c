#include<stdio.h>
int main()
{
    int t,arr[100],n,a,b,k,x,y,z;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        x=n/a;
        y=n/b;
        z=n/(a*b);
        if(x+y-z>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
        t--;
    }
}