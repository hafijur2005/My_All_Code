#include <stdio.h>
 
int main()
{
    int arr[100]={0};
    int n,t;
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        arr[a]++;
    }
    printf("%d",arr[t]);
    return 0;
}