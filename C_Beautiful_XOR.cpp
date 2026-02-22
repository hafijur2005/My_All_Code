#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
        }
        else if ( (a | b) != a ) {
            cout << -1 << "\n";
        }
        else {
            cout << 1 << "\n";
            cout << (a ^ b) << "\n";
        }
    }
    return 0;
}
