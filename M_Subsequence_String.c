#include<stdio.h>

int main()
{
    char s[10000],s1[]={"hello"};
    scanf("%s",s);
    int a=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==s1[a]) a++;
    }
    if(a==5) printf("YES");
    else printf("NO");

    return 0;
}