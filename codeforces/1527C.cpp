
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;

//https://codeforces.com/problemset/problem/1527/C

void Solution() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long dp[n];
    dp[0]=0;
    map<long long,long long> prefix;
    long long ans =0;
    prefix[arr[0]]++;
    for (int i = 1; i < n; i++)
    {
           dp[i]=dp[i-1];
           if(prefix.count(arr[i])){
               dp[i]+=prefix[arr[i]];
           }
           prefix[arr[i]]+=(i+1);
           ans+=dp[i];
    }
    cout<<ans<<endl;
    

    
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