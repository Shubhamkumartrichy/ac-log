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
        int a,b,c;
        cin>>a>>b>>c;
        cout<<min(abs(a-b),min(abs(b-c),abs(c-a)))<<endl;
    }
}