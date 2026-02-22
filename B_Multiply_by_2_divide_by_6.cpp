#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, count = 0;
        cin >> n;
        bool flag = true;
        while (n != 1)
        {

            if (n % 6 == 0)
            {
                count++;
                n /= 6;
            }
            else if (n == 2 || n == 4 || n == 5 || n > 1000000000)
            {
                flag = false;
                break;
            }
            else
            {
                n *= 2;
                count++;
            }
        }
        if (flag == true)
            cout << count << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}