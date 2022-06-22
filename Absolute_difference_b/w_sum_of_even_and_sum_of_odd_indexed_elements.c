#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],f,s1=0,s2=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+arr[i];
        }
        else
        {
            s2=s2+arr[i];
        }
    }
    f=abs(s1-s2);
    printf("%d",f);
}