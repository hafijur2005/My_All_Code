#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s1[51], s2[51];
        scanf("%s %s", s1, s2);

        int len1 = strlen(s1);
        int len2 = strlen(s2);
        int maxLen = len1 > len2 ? len1 : len2;

        for (int i = 0; i < maxLen; i++)
        {
            if (i < len1) {
                printf("%c", s1[i]);
            }
            if (i < len2) {
                printf("%c", s2[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
