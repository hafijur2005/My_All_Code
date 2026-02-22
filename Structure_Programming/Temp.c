#include <stdio.h>
#include <string.h>
void bignum(char s1[], char s2[])
{

    int x = strlen(s2);
    char s3[x + 1];
    int i = x - 1;

    int carry = 0;
    while (i > -1)
    {
        int n1 = (int)s1[i] - 48;
        int n2 = (int)s2[i] - 48;

        printf("%d %d\n", n1, n2);

        int sum = n1 + n2 + carry;
        carry = sum / 10;
        s3[i + 1] = sum % 10 + 48;
        i--;
    }

    if (carry > 0)
    {
        s3[0] = carry + 48;
        s3[x + 1] = 0;
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            s3[i] = s3[i + 1];
        }
        s3[x] = 0;
    }
    puts(s3);
}
int main()
{
    char s1[100000];
    char s2[100000];
    gets(s1);
    gets(s2);
    bignum(s1, s2);
    return 0;
}