#include <stdio.h>
void binary(int arr[], int n)
{
    for (int i = 7; i >= 0; i--)
    {
        arr[i] = (n >> i) & 1;
    }
    return;
}
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int arr[8];
    
    binary(arr, a);
    for (int i = 7; i >= 0; i--)
        printf("%d", arr[i]);
    printf(".");

    int arr1[8];
    binary(arr1, b);
    for (int i = 7; i >= 0; i--)
        printf("%d", arr1[i]);
    printf(".");

    int arr2[8];
    binary(arr2, c);
    for (int i = 7; i >= 0; i--)
        printf("%d", arr2[i]);
    printf(".");

    int arr3[8];
    binary(arr3, d);
    for (int i = 7; i >= 0; i--)
        printf("%d", arr3[i]);

    return 0;
}