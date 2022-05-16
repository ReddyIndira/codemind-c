#include<stdio.h>
int main()
{
    int r,c,a[100][100],i,j,sum1=0,sum2=0;
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
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                sum1=sum1+a[i][j];
            }
            else
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    printf("%d %d ",sum1,sum2);
}