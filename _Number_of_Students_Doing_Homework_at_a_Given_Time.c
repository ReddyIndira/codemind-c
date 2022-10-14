#include<stdio.h>
int main()
{
    int n,arr[100],arr1[100],i,j,c=0,e,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr1[j]);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(e>=arr[i] and e<=arr1[i])
        {
            c=c+1;
        }
    }
    printf("%d",c);
}