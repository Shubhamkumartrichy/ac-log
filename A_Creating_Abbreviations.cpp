#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

bool find(int x, vector<int> &parent) {
    for(int i = 0; i < parent.size(); i++) {
        if (parent[i] == x) {
            return true;
        }
    }
    return false;
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
        int a,b;
        int flag=1;
        cin>>a>>b;
        vector<string> s(a),k(b);
        vector<int> q;

        for(int i=0;i<a;i++){
            cin>>s[i];
        }

        for(int i=0;i<b;i++){
            cin>>k[i];
        }

        for(int i=0;i<a;i++){
            string c=s[i];
            q.push_back(c[0]-'a');
        }

        bool ok = true;
        for (int i = 0; i < b; i++) {
            string c = k[i];
            for (int j = 0; j < c.length(); j++) {
                if (!find(c[j] - 'A', q)) {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

}