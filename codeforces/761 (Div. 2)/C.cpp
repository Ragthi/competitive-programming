
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    bool ans= true;
    int count =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==i+1){

        }else{
            if((arr[i]%(arr[i]-(i+1)))==i+1){
                count++;
            }else{
                ans = false;
                break;
            }
        }
    }
    if(ans){
        cout<<count<<endl;
    }else{
        cout<<-1<<endl;
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
