#include <stdio.h>

int main() 
{
    char s[1000001];
    int sum = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) 
    {
        sum += s[i] - '0';
    }
    printf("%d", sum);

    return 0;
}
