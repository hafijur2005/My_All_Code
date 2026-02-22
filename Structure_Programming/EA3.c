#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100000], s2[100000], ans[100002];
    scanf("%s %s", s1, s2);

    int n = strlen(s1);
    int rem = 0;
    int k = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        int a = s1[i] - '0';
        int b = s2[i] - '0';
        int sum = a + b + rem;
        ans[k] = (sum % 10) + '0';
        rem = sum / 10;
        k++;
    }

    if (rem > 0)
        ans[k++] = rem + '0';
    ans[k] = '\0';
    for (int i = 0, j = k - 1; i < j; i++, j--)
    {
        char tmp = ans[i];
        ans[i] = ans[j];
        ans[j] = tmp;
    }

    printf("%s\n", ans);
    return 0;
}
