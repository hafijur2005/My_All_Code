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
int partition(int start,int end)
{
    int val=arr[end];
    int ind=start-1;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=val)
        {
            ind++;
            swap(arr[i],arr[ind]);
        }
    }
    ind++;
    swap(arr[end],arr[ind]);
    return ind;

}
void quick_sort(int start,int end)
{
    if(start<end)
    {
        int x=partition(start,end);
        quick_sort(0,x-1);
        quick_sort(x+1,end);
    }


}
int main()
{
    fast;

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    quick_sort(0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
