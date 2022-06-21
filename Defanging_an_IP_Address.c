#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,x;
    scanf("%[^
]s",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        if(x==46)
        {
            printf("[%c]",ch[i]);
        }
        else
        printf("%c",ch[i]);
    }
}