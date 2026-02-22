#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool arr[26] = {false};
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            arr[s[i] - 97] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == false)
        {
            cout << (char)(i + 97);
            return 0;
        }
    }
    cout << "None";
    return 0;
}