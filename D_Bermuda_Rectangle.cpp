// #include <bits/stdc++.h>
// using namespace std;

// #define int long long int
// #define endl '\n'

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     #ifdef shubhamkumarco
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

//     int t;
//     cin >> t;

//     while (t--) {
//         int a, b;
//         cin >> a >> b;

//         vector<int> c(b);
//         vector<int> d(b);

//         for (int i = 0; i < b; i++) {
//             cin >> c[i] >> d[i];
//         }

//         vector<vector<int>> mat(a, vector<int>(a, 0));

//         for (int i = 1; i <= a*a; i++) {
//             if (a % i == 0) {
//                 int k = a / i;

//                 for (int j = 0; j < i; j++) {
//                     for (int l = 0; l < k; l++) {
//                         mat[j][l] = 1;
//                     }
//                 }
//                 for (int j = 0; j < i; j++) {
//                     for (int l = 0; l < k; l++) {
//                         mat[l][j] = 1;
//                     }
//                 }
//             }
//         }

//         for (int i = 0; i < b; i++) {
//             int ans = 0;

//             for (int j = 0; j < c[i]; j++) {
//                 for (int l = 0; l < d[i]; l++) {
//                     if (mat[j][l] == 1) {
//                         ans++;
//                     }
//                 }
//             }

//             cout << ans << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        while (b--) {
            int c, d;
            cin >> c >> d;

            int ans = 0;

            // We need:
            // row * column <= a
            //
            // For every row, number of valid columns is
            // min(d, a / row)

            for (int row = 1; row <= c; row++) {
                ans += min(d, a / row);
            }

            cout << ans << endl;
        }
    }

    return 0;
}