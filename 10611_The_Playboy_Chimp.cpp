#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define nl cout << "\n";

int main()
{
    fast;
    int n;
    cin >> n;
    vector<int> hight(n);

    for (int i = 0; i < n; i++)
        cin >> hight[i];

    int q;
    cin >> q;
    while (q--)
    {
        int h;
        cin >> h;

        int lb = lower_bound(all(hight), h) - hight.begin();
        int ub = upper_bound(all(hight), h) - hight.begin();

        if (lb == 0)
            cout << "X ";
        else
            cout << hight[lb - 1] << " ";

        if (ub == n)
            cout << "X";
        else
            cout << hight[ub];
        nl
    }

    return 0;
}
