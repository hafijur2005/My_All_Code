#include <stdio.h>
int main()
{
    int n, d;
    double result, sum = 0.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &d);
        sum = sum + d;
    }
    result = sum / n;
    printf("%.12lf", result);

    return 0;
}