#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100001], s2[100001], s3[100002];
    gets(s1);
    gets(s2);

    int len1 = strlen(s1);
    //int len2 = strlen(s2);
    int carry = 0, i;
    for (int i = len1 - 1; i >= 0; i--)
    {
        int a = s1[i] - 48;
        int b = s2[i] - 48;
        int sum = a + b;
        if (carry)
        {
            sum+=carry;
            carry = 0;
        }
        int rem = sum % 10;
        s3[len1 - 1 - i] = rem + 48;
        carry = sum / 10;
    }
    if (carry)
    {
        s3[len1] = carry + 48;
        s3[len1 + 1] = 0;
    }
    else
        s3[len1] = 0;

    for (int i = 0, j = strlen(s3) - 1; i < j; i++, j--)
    {
        char temp = s3[i];
        s3[i] = s3[j];
        s3[j] = temp;
    }
    puts(s3);
    return 0;
}