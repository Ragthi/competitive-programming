
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    int n;
    cin>>n;
    string str,temp;
    for (int i = 0; i < n-2; i++)
    {
        cin>>temp;
        str+=temp;
    }
    cout<<str[0];
    bool error= false;
    for (int i = 2; i < str.length(); i+=2)
    {
        if(str[i]==str[i-1]){
            cout<<str[i];
        }else{
            error = true;
            cout<<str[i-1]<<str[i];
        }
    }

    cout<<str[str.length()-1];
    if(!error){
        cout<<"a";
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
