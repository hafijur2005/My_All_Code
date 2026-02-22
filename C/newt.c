#include<stdio.h>
#include<string.h>
int main (){
int t,n,k;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
    scanf("%d %d", &n, &k);
    char s[n];
    scanf("%s",s);
    int sum=0,l=n;
    for(int j=0;j<n/2;j++)
    {
        if(s[j]==s[l-1])
        {
            sum++;
            l--;
        }
        
    }
    if(sum==k)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
    return 0;
}