#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "nO\n";
#define nl cout << "\n";

int arr[100];
int n;
void heapify( int n, int i)
{
    int max = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[max])
        max = l;
    if (r < n && arr[r] > arr[max])
        max = r;
    if (max != i)
    {
        swap(arr[i], arr[max]);
        heapify(n, max);
    }
}
void heapSort()
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(n, i);

    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(i, 0);
    }
}

int main()
{
    fast;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    heapSort();

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
