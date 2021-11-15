
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;


void Solution() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    for (int i = 0; i < n-1; i++)
    {
        if(str.substr(i,2)=="aa"){
            cout<<2<<"\n";
            return;
        }
    }
    for (int i = 0; i < n-2; i++)
    {
        if(str.substr(i,3)=="aba" || str.substr(i,3)=="aca"){
            cout<<3<<"\n";
            return;
        }
    }
    for (int i = 0; i < n-3; i++)
    {
        if(str.substr(i,4)=="abca" || str.substr(i,4)=="acba"){
            cout<<4<<"\n";
            return;
        }
    }
    for (int i = 0; i < n-6; i++)
    {
        if(str.substr(i,7)=="abbacca" || str.substr(i,7)=="accabba"){
            cout<<7<<"\n";
            return;
        }
    }
    cout<<-1<<endl;
    
    
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