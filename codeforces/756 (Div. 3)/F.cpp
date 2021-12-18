
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;

void Solution() {
    long long n,initial;
    cin>>n>>initial;
    long long arr[n];
    long long left,right;
    left = right = -1;
    for (long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (long long i = 0; i < n; i++)
    {
        if(arr[i]+initial>=0){
            left = right = i;
            initial +=arr[i];
            break;
        }
    }
    if(left==-1){
        cout<<-1<<"\n";
        return;
    }
    long long starting=left+1,maxi=0;
    long long sum = initial;
     //cout<<"left "<<left<<endl;
    while(right<n-1){
        right++;
        sum+=arr[right];
        if(sum>=0){
            //cout<<"left "<<left<<endl;
            if(maxi<right-left){
                maxi = right-left;
                starting = left+1;
            }
        }else{
            for (long long i = left; i <= right && sum<0; i++)
            {
                sum-=arr[left];
                left++;
            }
            if(maxi<right-left){
                maxi = right-left;
                starting = left+1;
            }
            
        }
    }
    cout<<starting<<" "<<starting+maxi<<endl;
    

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