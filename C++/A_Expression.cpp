#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    cin>>a>>b>>c;
    d=a+b*c;
    e=a*(b+c);
    f=a*b+c;
    g=a*b*c;
    h=(a+b)*c;
    i=(c+a)*b;
    j=c*a+b;
    k=a+b+c;

    if(d>e&&d>f&&d>g&&d>h&&d>i&&d>j&&d>k)
    {
        cout<<d;
    }
    else if(e>d&&e>f&&e>g&&e>h&&e>i&&e>j&&e>k)
    {
        cout<<e;
    }
    else if(f>e&&f>d&&f>g&&f>h&&f>i&&f>j&&f>k)
    {
        cout<<f;
    }
    else if(g>e&&g>f&&g>d&&g>h&&g>i&&g>j&&g>k)
    {
        cout<<g;
    }
    else if(h>e&&h>f&&h>d&&h>g&&h>i&&h>j&&h>k)
    {
        cout<<h;
    }
    else if(i>e&&i>f&&i>g&&i>h&&i>d&&i>j&&i>k)
    {
        cout<<i;
    }
    else if(j>e&&j>f&&j>g&&j>h&&j>i&&j>d&&j>k)
    {
        cout<<j;
    }
    else
    {
        cout<<k;
    }
 
    return 0;
}