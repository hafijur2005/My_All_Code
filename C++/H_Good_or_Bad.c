#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        char s[100005];
        scanf("%s", s);

        int x = 0;
        int len = strlen(s);

        for (int i = 0; i < len - 2; i++) 
        {
            if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')||(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')) 
                {
                x = 1;
                break;
            }
        }

        if (x) 
        {
            printf("Good\n");
        } 
        else 
        {
            printf("Bad\n");
        }
    }

    return 0;
}
