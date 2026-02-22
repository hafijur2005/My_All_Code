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
    int n;
    cin >> n;
    vector<int> number(n + 1);
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        number[z] = i;
    }
    int count = 1;
    for (int i = 2; i <= n; i++)
    {
        // cout << number[i] << " ";
        if (number[i] < number[i - 1])
        {
            count++;
        }
    }
    nl
            cout
        << count;

    return 0;
}