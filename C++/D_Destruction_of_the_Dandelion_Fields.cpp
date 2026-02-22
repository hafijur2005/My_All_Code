#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        long long sum = 0;
        vector<int> v;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                sum += arr[i];   
            else
                v.push_back(arr[i]); 
        }

        sort(v.begin(), v.end()); 
        int h = 0;
        int j = v.size() - 1;

        while (h <= j)
        {
            if (count % 2 == 0)
            {
                sum += v[j]; 
                j--;      
            }
            else
            {
                h++;       
            }
            count++;
        }
        if(count==0)
            cout<<0<<endl;
        else
        cout << sum << endl;
    }
    return 0;
}
