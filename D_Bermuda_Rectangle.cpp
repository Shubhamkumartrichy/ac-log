#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifdef shubhamkumarco
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int s, q;
        cin >> s >> q;

        vector<int> fac;

        for (int i = 1; i * i <= s; i++) {
            if (s % i == 0) {
                fac.push_back(i);

                if (i * i != s) {
                    fac.push_back(s / i);
                }
            }
        }

        sort(fac.begin(), fac.end());

        int n = fac.size();

        vector<int> w(n);
        vector<int> h(n);

        vector<int> prew(n + 1);
        vector<int> prea(n + 1);

        for (int i = 0; i < n; i++) {
            w[i] = fac[i] - (i > 0 ? fac[i - 1] : 0);
            h[i] = s / fac[i];

            prew[i + 1] = prew[i] + w[i];
            prea[i + 1] = prea[i] + w[i] * h[i];
        }

        while (q--) {
            int x, y;
            cin >> x >> y;

            int ind = lower_bound(fac.begin(), fac.end(), x) - fac.begin();

            int l = 0;
            int r = ind - 1;
            int pos = -1;

            while (l <= r) {
                int mid = (l + r) / 2;

                if (h[mid] >= y) {
                    l = mid + 1;
                    pos = mid;
                }
                else {
                    r = mid - 1;
                }
            }

            int ans = prew[pos + 1] * y;
            ans += prea[ind] - prea[pos + 1];

            int prev = (ind == 0 ? 0 : fac[ind - 1]);

            ans += (x - prev) * min(h[ind], y);

            cout << ans << endl;
        }
    }

    return 0;
}