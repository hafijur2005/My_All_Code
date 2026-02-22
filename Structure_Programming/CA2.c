#include <stdio.h>
void dec_hex(int n)
{
    int a = n % 16;
    int b = n /= 16;
    if (b > 9)
    {
        printf("%c", 'A' + b - 10);
    }
    else
    {
        printf("%d", b);
    }
    if (a > 9)
    {
        printf("%c", 'A' + a - 10);
    }
    else
    {    
        printf("%d", a);
    }
}
int main()
{
    int r, g, b;
    scanf("%d%d%d", &r, &g, &b);
    dec_hex(r);
    dec_hex(g);
    dec_hex(b);

    return 0;
}