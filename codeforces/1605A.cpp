
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;


void Solution() {
    int a,b,c;
    cin>>a>>b>>c;
    int temp = abs(a+ c - 2*b);
    if(temp%3==0){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }
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