#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 2; ; j++)
        {
            int x = 0;
            for (int k = 2; k <= j / 2; k++)
            {
                if (j % k == 0)
                {
                    x = 1;
                    break;
                }
            }
            if (!x)
            {
                printf("%d ", j);
                count++;
                if (count == i)
                    break;
            }
        }
        printf("\n");
    }

    return 0;
}
