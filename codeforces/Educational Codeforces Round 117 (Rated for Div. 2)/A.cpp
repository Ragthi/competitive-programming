
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    int n,mini,maxi;
    cin>>n>>mini>>maxi;
    bool ans = false;
    vector<int> permuation;
    permuation.push_back(mini);

    for (int i = n; i >= 1; i--)
    {
        if(i!=maxi && i!=mini){
            permuation.push_back(i);
        }
    }
    permuation.push_back(maxi);
    int minimum = 200;
    for (int i = 0; i < n/2; i++)
    {
        minimum = min(permuation[i],minimum);
    }
    if(minimum!=mini){
        cout<<-1<<endl;
        return;
    }
    minimum = 0;
    for (int i = n/2; i < n; i++)
    {
        minimum = max(minimum,permuation[i]);
    }
    if(minimum==maxi){
        for (auto &x : permuation)
        {
            cout<<x<<" ";
        }
        
        
    }else{
        cout<<-1;
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