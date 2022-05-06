#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],sum=0,nc=0,count=0;
    scanf("%[^
]s",str);
    for(count=0;str[count]!=NULL;count++)
    {
        if(str[count]>'0' && str[count]<='9')
        {
            nc+=1;
            sum+=(str[count]-'0');
        }
    }
    printf("%d",sum);
}