#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false),cin.tie(nullptr)
#define all(x) x.begin(),x.end()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define nl cout<<"\n";

int main()
{
    fast;
    int t; 
    cin >> t;
	while (t--)
	{
		int n,k; cin >> n >> k;
		vector<int> a(n);
		int cur = 0;
		int res = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] >= k)
			{
				cur += a[i];
			}
			else if (a[i] == 0)
			{
				if (cur > 0)
				{
					cur--;
					res++;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}