#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    char S[10000001];
    scanf("%s", S);
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (S[j] > S[j + 1])
            {
                char temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        putchar(S[i]);
    }
    putchar('\n');

    return 0;
}
