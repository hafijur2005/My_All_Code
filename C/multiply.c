#include<stdio.h>

int main()
{
    long long int t,a,n;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        a=51-n;
        if(n>51)
        {
            printf("%lld",a*a);
        }
        else
        {
            printf("%lld",a);
        }
    printf("\n");
    }
    return 0;
}