#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        string a, b, c, s1 = "", s2 = "", s3;

        cin >> n >> a;
        cin >> m >> b;
        cin >> c;

        for (int i = 0; i < m; ++i)
        {
            if (c[i] == 'V')
            {
                s1 = b[i] + s1;
            }
            else
            {
                s2 += b[i];
            }
        }

        s3 = s1 + a + s2;
        cout << s3 << endl;
    }

    return 0;
}
