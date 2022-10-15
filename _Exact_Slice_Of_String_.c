#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i=n;i<=k;i++)
    {
        printf("%c",str[i]);
    }
}