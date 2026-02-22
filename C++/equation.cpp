#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,D;
    float x1,x2;
    cout<<"Input a,b,c for Equation ax+by+c=0\n";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);
    cout<<"x1= "<<x1<<", "<<"x2= "<<x2;
    return 0;
}