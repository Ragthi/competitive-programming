#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void run_case(){
    int n; cin>>n;
    vector<int> arr; 
    for(int i=0; i<n; ++i) {  int a; cin>>a; if(i==0) arr.push_back(a); if(i>0 && arr.back()!=a) arr.push_back(a); }
    bool inc=1, dec=1; int inc_and_dec=0;
    for(int i=1; i<arr.size(); ++i) {
        if(arr[i]>arr[i-1]) dec=0;
        else inc=0;
    }
    if(inc || dec) {cout<<"YES"; return;}

    for(int i=1; i<arr.size()-1; ++i){
        if(arr[i-1]<arr[i] && arr[i]<arr[i+1]) inc_and_dec++;
        else if(arr[i-1]>arr[i] && arr[i]<arr[i+1]) {cout<<"NO"; return;}
    }

    if(inc_and_dec < 2) cout<<"YES";
    else cout<<"NO";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1;
    cin>>t;
    while (t--)
    {
        run_case();
        cout<<"\n";
    }
    return 0;
}
