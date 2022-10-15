#include<stdio.h>
int main()
{
    char s[100];
    int c=0,max=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
        else
        {
            if(max<c)
            {
                max=c;
            }
            c=0;
        }
    }
    if(max<c)
    {
        max=c;
    }
    printf("%d",max+1);
}