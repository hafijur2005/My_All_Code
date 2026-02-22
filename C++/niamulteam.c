#include<stdio.h>
int main(){
int n;
scanf("%d",&n);

int a,b,c;
int x=0;

for(int i=1; i<=n; i++)
{
scanf("%d %d %d",&a,&b,&c);
if (a+b+c>=2)
{
    x++;
}
}
printf("%d",x);

return 0;
}