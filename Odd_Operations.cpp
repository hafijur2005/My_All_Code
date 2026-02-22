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
        int n;
        cin >> n;
        if (n < 10 && n % 2 == 0)
            cout << "-1";
        else if (n % 2 == 1)
            cout << "0";
        else
        {
            bool flag = false;
            vector<int> digit;
            int temp = n;
            while (temp)
            {
                int rem = temp % 10;
                if (rem % 2 == 1)
                {
                    flag = true;
                    break;
                }
                digit.push_back(rem);
                temp /= 10;
            }
            if (flag)
                cout << "1";
            else
            {
                sort(all(digit));
                if (digit[digit.size() - 1] == n % 10)
                    cout << "3";
                else
                    cout << "2";
            }
        }
        nl
    }

    return 0;
}