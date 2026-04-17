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
void insertion_sort()
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
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
    insertion_sort();
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
