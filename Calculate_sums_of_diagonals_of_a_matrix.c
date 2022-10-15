#include<stdio.h>
int main()
{
    int n,arr[1000][1000],s=0,o=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s=s+arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                o=o+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",s);
    printf("Secondary Diagonal:%d
",o);
    
}