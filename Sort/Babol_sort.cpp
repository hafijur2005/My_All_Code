#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
#define fast ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "nO\n";
#define nl cout << "\n";


int arr[1000];
int n;
void babol_sort()
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    fast;

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    babol_sort();
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
