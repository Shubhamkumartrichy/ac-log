#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

bool isPrime(int n) {
    if (n <= 1) return false;
    
    if (n == 2) return true;
    
    if (n % 2 == 0) return false;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef shubhamkumarco
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isPrime(n+1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}

