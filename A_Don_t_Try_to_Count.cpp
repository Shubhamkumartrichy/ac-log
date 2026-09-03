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

bool check(string s, string x)
{
    if(x.size() < s.size())
        return false;

    for(int i = 0; i + s.size() <= x.size(); i++)
    {
        if(x.substr(i, s.size()) == s)
            return true;
    }

    return false;
}

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
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        string x0 = x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;

        int ans = -1;

        if(check(s, x0))
            ans = 0;
        else if(check(s, x1))
            ans = 1;
        else if(check(s, x2))
            ans = 2;
        else if(check(s, x3))
            ans = 3;
        else if(check(s, x4))
            ans = 4;
        else if(check(s, x5))
            ans = 5;

        cout << ans << endl;
    }

    return 0;
}