
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    int n;
    cin>>n;
    long long arr[n];
    long long even,odd;
    cin>>even>>odd;
    arr[0]=even;
    arr[1]=odd;
    for (int i = 2; i < n; i++)
    {
        cin>>arr[i];
        if(!(i%2)){
            even = __gcd(even,arr[i]);
        }else{
            odd = __gcd(odd,arr[i]);
        }
    }
    //cout<<odd<<" "<<even<<endl;
    bool ans = true;
    if(even!=odd){
        for (int i = 0; i < n; i+=2)
        {
            if(arr[i]%odd==0){
                ans = false;
                break;
            }
        }
        if(ans){
            cout<<odd<<"\n";
        }else{
            for (int i = 1; i < n; i+=2)
            {
                if(arr[i]%even==0){
                cout<<0<<"\n";
                return;
                }
            }
            cout<<even<<endl;
            
        }


    }else{
        cout<<0<<"\n";
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
