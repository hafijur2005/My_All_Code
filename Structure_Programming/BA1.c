#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
    {
        int val = power(x, n / 2);
        return val * val;
    }
    else
    {
        return x * power(x, n - 1);
    }
}

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d\n", power(x, n));

    return 0;
}
