#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    getchar();
    priority_queue<int, vector<int>, greater<int>> pq;
    /*Here i diclare a priority queue, which is low priority ,priority queue, it store data
    like vector but is working process is different it store data sortedly,
    it sort it self continiously after a input and give the minimut valu in top*/
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    cin >> q;
    while (q--)
    {
        int b;
        cin >> b;
        if (b == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (b == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else
        {
            int c;
            cin >> c;
            pq.push(c);
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
    }

    return 0;
}