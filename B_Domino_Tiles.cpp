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
        int a;
        cin >> a;
        string s;
        cin >> s;
        string s1, s2, s3, s4;

        string p1 = "0011";
        string p2 = "0110";
        string p3 = "1100";
        string p4 = "1001";

        for (int i = 0; i < a; i++) {
            s1 += p1[i % 4];
            s2 += p2[i % 4];
            s3 += p3[i % 4];
            s4 += p4[i % 4];
        }

        int ans = 0;

        int flag1 = 1, flag2 = 1, flag3 = 1, flag4 = 1;

        for (int i = 0; i < a; i++) {
            if(s[i] == '?') {
                continue;
            }else if(s[i] == s1[i]) {
                flag1 = 1;
            }else{
                flag1 = 0;
                break;
            }
        }

        for (int i = 0; i < a; i++) {
            if(s[i] == '?') {
                continue;
            }else if(s[i] == s2[i]) {
                flag2 = 1;
            }else{
                flag2 = 0;
                break;
            }
        }

        for (int i = 0; i < a; i++) {
            if(s[i] == '?') {
                continue;
            }else if(s[i] == s3[i]) {
                flag3 = 1;
            }else{
                flag3 = 0;
                break;
            }
        }

        for (int i = 0; i < a; i++) {
            if(s[i] == '?') {
                continue;
            }else if(s[i] == s4[i]) {
                flag4 = 1;
            }else{
                flag4 = 0;
                break;
            }
        }

        cout<<flag1 + flag2 + flag3 + flag4<<endl;

    }

}