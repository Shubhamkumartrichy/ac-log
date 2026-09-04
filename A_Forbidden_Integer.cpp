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
        int n, k, x;
        cin >> n >> k >> x;

        if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;

            for(int i=0;i<n;i++)
            {
                cout<<1<<" ";
            }

            cout<<endl;
        }
        else
        {
            if(k==1 || (k==2 && n%2==1))
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;

                if(n%2==0)
                {
                    cout<<n/2<<endl;

                    for(int i=0;i<n/2;i++)
                    {
                        cout<<2<<" ";
                    }

                    cout<<endl;
                }
                else
                {
                    cout<<(n-3)/2+1<<endl;

                    for(int i=0;i<(n-3)/2;i++)
                    {
                        cout<<2<<" ";
                    }

                    cout<<3<<endl;
                }
            }
        }
    }

    return 0;
}