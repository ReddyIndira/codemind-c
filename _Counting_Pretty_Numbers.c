#include<stdio.h>
int main()
{
    int t,l,r,i,j,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&l,&r);
        c=0;
        for(j=l;j<=r;j++)
        {
            if(j%10==2 || j%10==3 || j%10==9)
            {
                c+=1;
            }
        }
        printf("%d
",c);
    }
}