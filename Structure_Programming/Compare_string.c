#include <stdio.h>
#include <string.h>
void f(char s1[], char s2[])
{
    int x = strlen(s1);
    int y = strlen(s2);
    int z = y;
    if (x < y)
    {
        z = x;
    }
    int flag = 0;
    for (int i = 0; i < z; i++)
    {
        if (s1[i] > s2[i])
        {
            printf("s1 bigger s2");
            return;
        }
        else if (s1[i] < s2[i])
        {
            printf("s1 less s2");
            return;
        }
    }
    if ( x > y)
        printf("s1 bigger s2");
    else if ( x < y)
        printf("s1 less s2");
    else
        printf("s1 equql s2");
}
int main()
{
    char s1[100];
    char s2[100];
    scanf("%s%s",s1,s2);
    f(s1, s2);

    return 0;
}