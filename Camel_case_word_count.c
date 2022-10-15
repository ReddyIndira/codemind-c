#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,c=0;
    scanf("%s",str);
    for(i=1;i<strlen(str);i++)
    {
        if(str[i]>64 && str[i]<91)
        {
            c++;
        }
    }
    printf("%d",c+1);
}