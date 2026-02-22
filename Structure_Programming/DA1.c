#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", fact(i) / (fact(j) * (fact(i - j))));
        }
        printf("\n");
    }
    return 0;
}