#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << "\n";

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, a, b;
        cin >> l >> r;
        a = (r / 2);
        b = (r / 2);
        if (r < 6)
            cout << "-1";
        else if(!(l == r && r % 2 == 1))
        {
            if ((r / 2) % 2 == 1)
            {
                a--;
                b++;
            }
            else
            {
                a -= 2;
                b += 2;
            }
            cout<<a<<" "<<b;
        }
        else
        {
            for(int i=l+1;i<r;i++)
            {
                if(__gcd(i,r-i)!=1)
                {
                    cout<<i<<" "<<r-i;
                }
            }
        }
        nl
    }

    return 0;
}