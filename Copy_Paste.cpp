#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        // int arr[n];
        // bool flag[100000]={false};
        for (int i = 0; i < n; i++)
        {
            int a;

            cin >> a;
            s.insert(a);
            // flag[arr[i]]=true;
        }
        cout << s.size() << endl;
    }

    return 0;
}