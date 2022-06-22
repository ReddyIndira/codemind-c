#include<stdio.h>
int main()
{
    int n,a[100][100],i,j,r,c,s1=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s1=0;
        for(j=0;j<c;j++)
        {
            s1=s1+a[i][j];
        }
        printf("%d ",s1);
    }
}