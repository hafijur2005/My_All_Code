#include<stdio.h>

int main()
{
    int a,count=0;
    scanf("%d",&a);
    char s[a];
    scanf("%s",s);
    for(int i=1;i<a;i++)
    {
        if(s[i]==s[i-1]) count++;
    }
    printf("%d",a-count);
    return 0;
}