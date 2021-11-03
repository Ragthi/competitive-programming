
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;


void Solution() {
    long long n;
        cin>>n;
        vector<long long> arr(n);
        long long mini = 1e9+7;
        for (long long i = 0; i < n; i++)
        {
            cin>>arr[i];
            mini = min(mini,arr[i]);
        }
        long long ans = mini;
        for (long long i = 0; i < n; i++)
        {
            
            arr[i]-=mini;
        }
        if(n>1){
            sort(arr.begin(),arr.end());
 
            for (long long i = 1; i < n; i++)
            {
                ans = max(ans,arr[i]-arr[i-1]);
            }
            
        }
        cout<<ans<<"\n";
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << fixed << setprecision(12);
    ll tc=1; cin >> tc; while (tc--)
    Solution();
    cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}