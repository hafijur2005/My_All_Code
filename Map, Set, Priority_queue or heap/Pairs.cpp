#include <bits/stdc++.h>
using namespace std;
bool sort_int(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> vec;
    while (n--)
    {
        string s;
        int a;
        cin >> s >> a;
        vec.push_back(make_pair(s, a));
    }
    sort(vec.begin(), vec.end(), sort_int);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }

    return 0;
}