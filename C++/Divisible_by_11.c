#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[102];
    scanf("%s",s);
   
    size_t len = strlen(s);
    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    int sum1 = 0, sum2 = 0;
    int position = 1; 
    for (int i = len - 1; i >= 0; i--, position++) {
        int rem = s[i] - '0';
        if (position % 2 == 1)
            sum1 += rem;
        else
            sum2 += rem;
    }

    int diff = abs(sum1 - sum2);

    if (diff % 11 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

