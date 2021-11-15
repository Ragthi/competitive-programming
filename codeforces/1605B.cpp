
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;


void Solution() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int one=0;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='1'){
            one++;
        }
    }
    //cout<<one<<endl;
    vector<int> ans;
    int count=0;
    for (int i = n-one; i <=n-1; i++)
    {
        if(str[i]=='0'){
            ans.push_back(i+1);
            count++;
        }
    }
    if(count==0){
        cout<<0<<"\n";
        return;
    }else{
        cout<<1<<"\n";
    }
    cout<<2*count<<" ";
    for (int i = 0; i < n && count>0; i++)
    {
        if(str[i]=='1'){
            cout<<i+1<<" ";
            count--;
        }
        
    }
    for (auto &x : ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    
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