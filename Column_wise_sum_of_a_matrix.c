#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c,s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        s=0;
        for(i=0;i<r;i++)
        {
            s=s+a[i][j];
        }
        printf("%d ",s);
    }
}