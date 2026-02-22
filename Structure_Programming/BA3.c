#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    double left = 1, right = n, mid;
    while (right > left)
    {
        mid = (left + right) / 2;
        double x = mid * mid;
        if (x > n)
        {
            right = mid;
        }
        else if (x < n)
        {
            left = mid;
        }
        // way 1
        // if (right - left < 0.00001||mid*mid==n)
        //      break;

        // way 2, Need fabs() function
        if (fabs(mid * mid - n) < 0.00001)
            break;
    }
    printf("%.5lf", mid);

    return 0;
}