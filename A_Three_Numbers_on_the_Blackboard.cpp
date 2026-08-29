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
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];  
        }
        sort(arr, arr + 3);  

        if(arr[0]+ arr[1]<= arr[2]){
            arr[2]= arr[0]+ arr[1];
        }
        sort(arr, arr + 3); 
        cout<<arr[2]-arr[0]<<endl;
    }

}