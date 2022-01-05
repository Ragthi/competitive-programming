#include <iostream>

#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
using ll = int64_t;
int n;
int arr[200002];

bool func(int temp){
    int duplicate[n];
    for (int i = 0; i < n; i++)
    {
        duplicate[i]=arr[i];
    }
    for (int i = n - 1; i >= 2; i--)
    {
        if(duplicate[i]<temp){
            return false;
        }
        int d = min(arr[i],(duplicate[i]-temp))/3;
        duplicate[i-1]+=d;
        duplicate[i-2]+=2*d;

    }
    return (duplicate[0]>=temp) && duplicate[1]>=temp;
    
    
}

void Solution() {
    cout<<"error"<<endl;
    cin>>n;
    int maxi =0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        maxi +=arr[i];
    }
    maxi = maxi/n;

    int mini=0;
    while(mini<maxi){
        int avg = (mini+maxi)/2;
        if(func(avg)){
            mini = avg;
        }else{
            maxi = avg -1;
        }
    }
    cout<<mini<<endl;


    
    
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
