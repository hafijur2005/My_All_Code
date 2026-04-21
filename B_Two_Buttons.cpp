// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ld double
// #define fast ios::sync_with_stdio(false), cin.tie(nullptr)
// #define all(x) x.begin(), x.end()
// #define yes cout << "YES\n";
// #define no cout << "nO\n";
// #define nl cout << "\n";

// int level[10000];
// bool visited[10000];
// int n, m;

// void bfs(int n)
// {
//     queue<int> q;
//     visited[n] = true;
//     level[n] = 0;
//     q.push(n);

//     while (!q.empty())
//     {
//         int temp = q.front();
//         q.pop();

//         if (temp == m) return;

//         if (temp - 1 >= 0 && !visited[temp - 1])
//         {
//             visited[temp - 1] = true;
//             level[temp - 1] = level[temp] + 1;
//             q.push(temp - 1);
//         }

//         if ( !visited[temp * 2])
//         {
//             visited[temp * 2] = true;
//             level[temp * 2] = level[temp] + 1;
//             q.push(temp * 2);
//         }
//     }
// }

// int main()
// {
//     fast;

//     cin >> n >> m;
//     bfs(n);
//     cout << level[m];
//     return 0;
// }