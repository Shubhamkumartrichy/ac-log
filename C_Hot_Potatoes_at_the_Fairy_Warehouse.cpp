#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef shubhamkumarco
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        string k=s;
        int c=s.size();
        for(int j=0;j<c-1;j++){
            if(s[j]=='1'&& s[j+1]=='0'){
                k[j]='0';
                k[j+1]='1';
            } 
        }
        if(s[c-1]=='1'&& s[0]=='0'){
                k[c-1]='0';
                k[0]='1';
        }
        int ans1=0,ans2=0;
        for(int j=0;j<a;j++){
            if(k[2*j]=='1'){
                ans1++;
            }
            if(k[2*j+1]=='1'){
                ans2++;
            }
        }
        cout<<ans2<<" "<<ans1<<endl;
    }

}