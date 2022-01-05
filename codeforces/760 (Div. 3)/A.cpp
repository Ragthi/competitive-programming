
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }
    cout<<arr[0]<<" "<<arr[1]<<" ";
    arr[6]-=(arr[0]+arr[1]);
    for (int i = 2; i < 7; i++)
    {
        if(arr[6]==arr[i]){
            cout<<arr[i];
            break;
        }
    }
    cout<<"\n";
    
    
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
