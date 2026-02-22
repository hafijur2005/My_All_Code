#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], s1[20];
    scanf("%s%s", s, s1);
    int lens, lens1;
    lens = strlen(s);
    lens1 = strlen(s1);
    lens--;
    for (int i = lens1 - 1; i >= 0; i--)
    {
        if (s[lens] != s1[i])
        {
            printf("Not Suffix");
            return 0;
        }
        lens--;
    }
    printf("Suffix");
    return 0;
}