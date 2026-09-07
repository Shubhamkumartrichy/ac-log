#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
// const int MOD = 998244353;

int gcdll(int a, int b){
    while(b){
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcmll(int a, int b){
    return a / gcdll(a, b) * b;
}

int power(int a, int b){
    int ans = 1;
    while(b){
        if(b & 1) ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

bool isPowerOfTwo(int n){
    return n > 0 && (n & (n - 1)) == 0;
}

int ncr(int n, int r){
    if(r > n || r < 0) return 0;
    if(r > n - r) r = n - r;

    int ans = 1;
    for(int i = 1; i <= r; i++)
        ans = ans * (n - i + 1) / i;

    return ans;
}

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef shubhamkumarco
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while(t--){
        int a, b; 
        cin >> a >> b;
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2;
        set<pair<int, int>> st1, st2;
        for(int j = 0; j < 4; j++){
            st1.insert({x1+dx[j]*a, y1+dy[j]*b});
            st2.insert({x2+dx[j]*a, y2+dy[j]*b});
            st1.insert({x1+dx[j]*b, y1+dy[j]*a});
            st2.insert({x2+dx[j]*b, y2+dy[j]*a});
        }
        int ans = 0;
        for(auto x : st1)
            if(st2.find(x) != st2.end())
                ans++;
        cout << ans << endl;
    }
    return 0;
}