#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    pbds<int> L, R;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> v1(n), v2(n);
    for (int i = 0; i < n; i++)
        R.insert(a[i]);

    for (int j = 0; j < n; j++)
    {
        R.erase(a[j]);
        v2[j] = R.order_of_key(a[j]);
    }
    for (int j = 0; j < n; j++)
    {
        v1[j] = L.size() - L.order_of_key(a[j] + 1);
        L.insert(a[j]);
    }
    long long ans = 0;
    for (int j = 0; j < n; j++)
    {
        ans += v1[j] * v2[j];
    }
    cout << ans << "\n";
    return 0;
}
