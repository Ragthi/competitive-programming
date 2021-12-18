
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;

//https://codeforces.com/problemset/problem/1527/C

void Solution() {
    
     int a,b;
    cin>>a>>b; 
    cout<<min({a,b,(a+b)/4})<<"\n";
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