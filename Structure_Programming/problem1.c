#include <stdio.h>
#include <string.h>
void rev(char s[])
{
    int l = 0;
    int n = strlen(s);
    for (int i = 0; i <= n; i++)
    {
        if (s[i] == ' ' || i == n)
        {
            for (int j = i - 1; j >= l; j--)
            {
                printf("%c", s[j]);
            }
            l = i+1;
            printf(" ");
        }
    }
}
int main()
{
    char s[100];
    gets(s);
    rev(s);
    return 0;
}