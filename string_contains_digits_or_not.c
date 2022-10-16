#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,t,l=strlen(str),c=0,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",str);
        c=0;
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]>'0' && str[j]<='9')
            {
                c++;
            }
        }
        if(c>0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
}