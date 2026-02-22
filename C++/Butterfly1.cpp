#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    
    char arr[(2*n-1)][(2*n-1)];

    for (int i=0;i<(2*n-1);i++)
    {
        for (int j=0;j<(2*n-1);j++)
        {
            
            if(i<ceil((2*n-1)/2.0))
            {
                a=i;
            }
            else
            {
                a=(2*n-1)-1-i;
            }

            if(j<ceil((2*n-1)/2.0))
            {
                b=j;
            }
            else
            {
                b=(2*n-1)-1-j;
            }
            
            if(b<=a)
            {
                arr[i][j]='*';
            }
            else
            {
                arr[i][j]=' ';
            }
            
        }
    }
    for(int i=0;i<(2*n-1);i++)
    {
        for (int j=0;j<(2*n-1);j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    

    return 0;
}
