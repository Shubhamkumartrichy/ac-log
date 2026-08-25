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