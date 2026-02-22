#include <stdio.h>
int prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;

}
int fibonacci(int n,int first,int second)
{
    if(first==n)
        return 1;
    if(first>n)
        return 0;
    return fibonacci(n,second,first+second);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n)&&fibonacci(n,0,1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
 
    return 0;
}