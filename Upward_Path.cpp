#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<int> a(N), b(N);
        for (int i = 0; i < N; i++) cin >> a[i];
        for (int i = 0; i < N; i++) cin >> b[i];

        const int INF = 1e9;

        bool dp0 = true, dp1 = true;
        int last0 = min(a[0], b[0]);
        int last1 = max(a[0], b[0]);

        for (int i = 1; i < N; i++) {
            bool ndp0 = false, ndp1 = false;
            int nlast0 = INF, nlast1 = INF;

            int x = a[i], y = b[i];

            // try top
            if (dp0 && x >= last0) {
                ndp0 = true;
                nlast0 = min(nlast0, x);
            }
            if (dp1 && x >= last1) {
                ndp0 = true;
                nlast0 = min(nlast0, x);
            }

            // try bottom
            if (dp0 && y >= last0) {
                ndp1 = true;
                nlast1 = min(nlast1, y);
            }
            if (dp1 && y >= last1) {
                ndp1 = true;
                nlast1 = min(nlast1, y);
            }

            if (!ndp0 && !ndp1) {
                dp0 = dp1 = false;
                break;
            }

            dp0 = ndp0;
            dp1 = ndp1;
            last0 = nlast0;
            last1 = nlast1;
        }

        cout << ((dp0 || dp1) ? "Yes\n" : "No\n");
    }
    return 0;
}
