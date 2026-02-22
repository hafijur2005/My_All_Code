#include <stdio.h>
#include <string.h>

int palindrome(char* s) 
{
    int arr2[26] = {0};
    for (int i = 0; s[i]; i++) 
    {
        arr2[s[i] - 'a']++;
    }

    int count1 = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (arr2[i] % 2 != 0) {
            count1++;
        }
    }
    
    return (count1 > 0) ? count1 - 1 : 0;
}

int main() {
    int t;
    scanf("%d", &t);
    
    char arr1[1005];
    while (t--) {
        scanf("%s", arr1);
        int result = palindrome(arr1);
        printf("%d\n", result);
    }

    return 0;
}
