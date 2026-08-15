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
        int count=1;
        int ans=0;
        int k=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        } 
        sort(a.begin(), a.end());
        int sum=accumulate(a.begin(), a.end(), 0);
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                count++;
                if(count>ans){
                    ans=max(ans,count);
                    k=a[i];
                }
            }else{
                count=0;
            }
        }
        if(ans>(n+1)/2 && n%2==1){
            int s=ans-((n+1)/2);
            cout<<sum-(((2*s)-1)*k)<<endl;
        }else if(ans>(n+1)/2 && n%2==0) {
            int g=ans-((n+1)/2);
            cout<<sum-(((2*g)-2)*k)<<endl;
        }else{
            cout<<sum<<endl;
        }
    }
}