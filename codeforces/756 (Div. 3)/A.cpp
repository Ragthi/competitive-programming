
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    int n;
    cin>>n;
    if(n%2==0){
        cout<<0<<"\n";
        return;
    }else{
        int present = false;
        int rem;
        while(n>0){
            rem = n%10;
            n=n/10;
            if(rem%2==0){
                present = true;
            }
        }
        if(present){
            if(rem%2==0){
                cout<<1<<"\n";
            }else{
                cout<<2<<"\n"
            }
        }else{
            cout<<-1<<"\n";
        }
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