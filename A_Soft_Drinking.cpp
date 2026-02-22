#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    vector<int> vec;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vec.push_back((k * l / nl) / n);
    vec.push_back((c * d) / n);
    vec.push_back((p / np) / n);

    sort(vec.begin(), vec.end());
    cout << vec[0];

    return 0;
}