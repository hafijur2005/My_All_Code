#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    int D=b*b-4*a*c;
    if(D>0||D==0){
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        printf("%f\n%f",x1,x2);
        ///printf("%f",x2);
    }else
    printf("complex number");
return 0;
}