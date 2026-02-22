#include <bits/stdc++.h>
using namespace std;

int calculate(vector<int> &vec, int c)
{
    int cnt = 0;
    while (!vec.empty() && vec.back() > c)
    {
        cnt++;
        vec.pop_back();
    }
    if (vec.empty())
        return cnt;

    vec.pop_back();
    for (int &x : vec)
    {
        x *= 2;
    }
    return cnt + calculate(vec, c);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int result = calculate(v, c);
        cout << result << endl;
    }

    return 0;
}
