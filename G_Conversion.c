#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1001], s2[1001];
    scanf("%s", s);
    strcpy(s2, s);
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) 
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }

    if (strcmp(s, s2) == 0) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
