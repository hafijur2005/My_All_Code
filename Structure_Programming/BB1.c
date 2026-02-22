#include <stdio.h>
int f(int x)
{
    return x % 2;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", f(x));
    return 0;
}