#include<stdio.h>
int main (){
int x,sum=0,y,count=0;
long long int num;
scanf("%lld",&num);
x=num;
while (num!=0)
{
//count++;
y = num%10;
if(y == 4 || y == 7)
{
    count++;
    //sum=sum+1;
}
num = num/10;
}
if(count==4||count==7)
{
    printf("YES");
}
else
{
    printf("NO");
}
    return 0;
}