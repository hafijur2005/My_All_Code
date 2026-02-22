#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<pair<char, int>> capital;
        stack<pair<char, int>> small;
        string s;
        cin >> s;
        int n = s.size();
        char arr[n];
        memset(arr, '0', sizeof(arr));
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == 'b')
            {
                if (!small.empty())
                {
                    pair<char, int> a;
                    a = small.top();
                    small.pop();
                }
            }
            else if (c == 'B')
            {
                if (!capital.empty())
                {
                    pair<char, int> a;
                    a = capital.top();
                    capital.pop();
                    // cout << a.first << endl;
                }
            }
            else if (c >= 'a' && c <= 'z')
            {
                small.push({c, i});
            }
            else if (c >= 'A' && c <= 'Z')
            {
                capital.push({c, i});
            }
        }
        while (!small.empty())
        {
            pair<char, int> a;
            a = small.top();
            small.pop();
            arr[a.second] = a.first;
        }
        while (!capital.empty())
        {
            pair<char, int> a;
            a = capital.top();
            capital.pop();
            arr[a.second] = a.first;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != '0')
                cout << arr[i];
        }
        cout << endl;
    }

    return 0;
}
