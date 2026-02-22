#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>n;
    a=n%2;
    switch (a)
    {
    case 0:
        cout<<"Even Number";
        break;
    
    default:
        cout<<"Odd Number";
        break;
    }

 
 
    return 0;
}