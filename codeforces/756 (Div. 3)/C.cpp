
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
    if(arr[0]==n){
        for (int i = n-1; i > 0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<n<<"\n";
        
    }else if(arr[n-1]==n){
        for (int i = n-2; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<n<<"\n";
    }else{
        cout<<-1<<"\n";
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