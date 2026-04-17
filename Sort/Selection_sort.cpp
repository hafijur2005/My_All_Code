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
void selection_sort()
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        if(min!=i)
            swap(arr[min],arr[i]);
    }
}
int main()
{
    fast;

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selection_sort();
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
