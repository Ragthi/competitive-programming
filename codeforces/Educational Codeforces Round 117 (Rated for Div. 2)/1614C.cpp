
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;
int mod = 1e9 +7;

void Solution() {
    int n,m;
    cin>>n>>m;
    int v,ans=0;
    for (int i = 0; i < m; i++)
    {
        cin>>v>>v>>v;
        //cout<<"ans "<<ans<<" "<<v<<endl;
        ans = (ans | v);
        
    }
    ans %=mod;
    
    for (int i = 0; i < n-1; i++)
    {
        ans = (ans*2)%mod;
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