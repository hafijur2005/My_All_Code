#include <stdio.h>

int main()
{
    int t;
    float a, b;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%f %f", &a, &b);

        if (a == 0 && b == 0)
        {
            printf("ORIGIN\n");
        }
        else if (b == 0)
        {
            printf("X-AXIS\n");
        }
        else if (a == 0)
        {
            printf("Y-AXIS\n");
        }
        else if (a > 0 && b > 0)
        {
            printf("1ST QUADRANT\n");
        }
        else if (a < 0 && b > 0)
        {
            printf("2ND QUADRANT\n");
        }
        else if (a < 0 && b < 0)
        {
            printf("3RD QUADRANT\n");
        }
        else
        {
            printf("4TH QUADRANT\n");
        }
    }

    return 0;
}
