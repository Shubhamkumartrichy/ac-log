#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
const int MOD = 1e9 + 7;
// const int MOD = 998244353;

int gcdll(int a,int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}

int lcmll(int a,int b){
    return a/gcdll(a,b)*b;
}

int power(int a,int b){
    int ans=1;
    while(b){
        if(b&1) ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

bool isPowerOfTwo(int n){
    return n>0 && (n&(n-1))==0;
}

int ncr(int n, int r) {
    if (r > n || r < 0) return 0;
    if (r > n - r) r = n - r;  

    int ans = 1;
    for (int i = 1; i <= r; i++) {
        ans = ans * (n - i + 1) / i;
    }
    return ans;
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
        int a;
        cin >> a;
        int arr[a-1];
        for(int i=0;i<a-1;i++){
            cin>>arr[i];
        }
        int b;
        cin>>b;
        int arr2[b];
        for(int i=0;i<b;i++){
            cin>>arr2[i];    
        }
        int arr3[a-1];
        int min_val = *min_element(arr2, arr2 + b);
        int j = 0;

        for(int i=0;i<b;i++){
            if(arr2[i]==min_val){
                continue;
            }else{
                arr3[j] = arr2[i];
                j++;
            }
        }

        cout<<b-1<<" ";
        for(int i=0;i<j;i++){
            cout<<arr3[i]<<" ";
        }
        cout<<endl;
    }

}