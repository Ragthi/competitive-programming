
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    int n;
    cin>>n;
            
    n--;
    int temp = n;
    if(n%2==0){
        n=n/2;
        if(n%2!=0){
            cout<<(n-2)<<" "<<(n+2)<<" "<<1<<"\n";
        }else{
            cout<<(n-1)<<" "<<(n+1)<<" "<<1<<"\n";
        }
    }else{
        cout<<(n)/2<<" "<<(n/2)+1<<" "<<1<<"\n";
    }
    
    
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\sethi\\Desktop\\Desktop\\competitive-programming\\input.txt", "r", stdin);
    freopen("C:\\Users\\sethi\\Desktop\\Desktop\\competitive-programming\\output.txt", "w", stdout);
#endif
    cout << fixed << setprecision(12);
    ll tc=1; cin >> tc; while (tc--)
    Solution();
    cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
