#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef shubhamkumarco
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        int cnta[2] = {}, cntb[2] = {};
        for(int i = 0; i < n; i++) {
            cnta[i % 2] += a[i] == '1';
            cntb[i % 2] += b[i] == '1';
        }
        
        cout << (cnta[0] == cntb[0] && cnta[1] == cntb[1] ? "YES" : "NO") << endl;
    }
}
