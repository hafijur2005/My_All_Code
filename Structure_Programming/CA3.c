#include <stdio.h>
void print_rev(int n)
{
    if (n == 0)
        return;
    printf("%d", n % 10);
    print_rev(n / 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_rev(n);
    return 0;
}