#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max, min, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++)
    {

        if (arr[i] > max && i != 0)
        {

            count++;
            max = arr[i];
        }
        else if (arr[i] < min && i != 0)
        {
            count++;
            min = arr[i];
        }
    }
    cout << count;

    return 0;
}