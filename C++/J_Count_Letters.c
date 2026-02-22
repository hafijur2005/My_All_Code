#include <stdio.h>
#include <string.h>

int main()
{
    int arr[26] = {0};
    char s[1000];

    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        arr[s[i] - 'a']++;
    }

     

    // for (int i = 0; i < strlen(s); i++)
    // {
    //     if (arr[s[i] - 'a'])
    //     {
    //         printf("%c : %d\n", s[i], arr[s[i] - 'a']);
    //         arr[s[i] - 'a'] = 0;
    //     }
    // }

    return 0;
}
