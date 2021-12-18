
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>> arr(n); 
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin>>temp;
        arr.push_back(make_pair(temp,i+1));
    }
    vector<ll> ans(n+1);
    ans[0]=0;
    sort(arr.begin(),arr.end(),greater<pair<ll,ll>>());
    ll var=0;
    ll cost=0;
    for (ll i = 0; i < n; i++)
    {
        if(i%2==0){
            ans[arr[i].second] = (++var);
            cost+=2*var*arr[i].first;
        }else{
            ans[arr[i].second] = -1 * (var);
            cost+=2*var*arr[i].first;
        }
    }
    cout<<cost<<"\n";
    for (ll i = 0; i < n+1; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";


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