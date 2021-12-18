
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;

vector<int> edges[200000+2];
int arr[200000+2];
int n;
int ans[200000+2];
bool exist = true;

void dfs(int node,int cost,int par){

    int pos = arr[node];
    ans[node] = pos-1 - cost;
    if(ans[node]<1 && par!=-1){
        exist=false;
        return;
    }
    for (auto &x : edges[node])
    {
        if(x!=par){
            dfs(x,pos-1,node);
        }
    }
    
}


void Solution() {
    cin>>n;
    int v;
    int root;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        if(v!=i+1){
            edges[v].push_back(i+1);
        }else{
            root = v;
        }
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        arr[temp]=i+1;
    }
    
    dfs(root,0,-1);
    if(exist){
        for (int i = 0; i < n; i++)
    {
        cout<<ans[i+1]<<" ";
    }
    cout<<"\n";
    }else{
        cout<<-1<<endl;
    }
    for (int i = 0; i < n+1; i++)
    {
        edges[i].clear();
    }
    exist = true;
    
    
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