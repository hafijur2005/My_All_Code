#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int pnt[3] = {0};
        cin >> n;
        string arr[3][n];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                arr[i][j] = s;
            }
        }

        map<string, int> freq;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                freq[arr[i][j]]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s = arr[i][j];
                if (freq[s] == 1)
                    pnt[i] += 3;
                else if (freq[s] == 2)
                    pnt[i] += 1;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            cout << pnt[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
