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
        vector<int> c(a);
        vector<int> d(b);

        int ans1=0,ans2=0;

        for(int i=0;i<a;i++){
            cin>> c[i];
        }
        reverse(c.begin(), c.end());

        for(int i=0;i<b;i++){
            cin>> d[i];
        }
        reverse(d.begin(), d.end());

        for(int i=1;i<a;i++){
            ans1+=c[i]-c[i-1]+1;
        }
        ans1+=c[0];

        for(int i=1;i<b;i++){
            ans2+=d[i]-d[i-1]+1;
        }
        ans2+=d[0];

        // cout<<ans1<<" "<<ans2<<endl;

        if(ans1<ans2){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }

    }

}


