#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> vec;

        long long int a = 10;
        for (int k = 1; k <= 18; k++)
        {
            long long int d = 1 + a;
            if (n % d == 0)
            {
                long long int x = n / d;
                vec.push_back(x);
            }
            a = a * 10;
        }

        if (vec.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            sort(vec.begin(), vec.end());
            cout << vec.size() << endl;

            for(long long int i=0;i<vec.size();i++)
            {
                cout<<vec[i]<<" ";
            }
            cout << endl;
        }
    }

    return 0;
}
