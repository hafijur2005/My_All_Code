#include <stdio.h>
 
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    a--;
    b--;
    if(a-1>=0)
    {
        sum+=arr[a-1][b];
    }
    if(a+1<n)
    {
        sum+=arr[a+1][b];
    }
    if(b-1>=0)
    {
        sum+=arr[a][b-1];
    }
    if(b+1<m)
    {
        sum+=arr[a][b+1];
    }
    printf("%d",sum);
 
    return 0;
}