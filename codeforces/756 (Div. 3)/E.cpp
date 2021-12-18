
#include "bits/stdc++.h"
#include<map>
#include<vector>
using namespace std;
#define dbg(...)
using ll = int64_t;

//https://codeforces.com/problemset/problem/1527/C
int n,k;
int present[200000+2];
int values[200000+2];
bool ans = false;
int total=0;
vector<int> edges[200000+2];

int dfs(int node,int par=-1){
    if(present[node]){
        //cout<<"node "<<node<<endl;
         values[node]=0;
        return 1;
    }
    if(edges[node].size()==1 && node!=1){
        values[node]=200000+2;
        return values[node]+1;
    }
    int mini = 200000+2;
    for (auto &x : edges[node])
    {
        if(x!=par){
            mini = min(dfs(x,node),mini);
            //cout<<"mini "<<mini<<endl;
        }
    }
    values[node]=mini;
    return mini+1;
}


void rootdfs(int node,int par,int cost){
    if(values[node]>cost){
        for (auto &x : edges[node])
        {
            if(x!=par){
                rootdfs(x,node,cost+1);
            }
        }
        if(node!=1 && (edges[node].size()==1)){
            ans = true;
            //cout<<"aaya tha "<<endl;
            return;
        }
    }else{
        total++;
    }
    
}

void Solution() {
    cin>>n>>k;
    for (int i = 0; i < n+1; i++)
    {
        edges[i].clear();
    }
    total=0;
    
    int temp;
    for (int i = 0; i < k; i++)
    {
        cin>>temp;
        present[temp]=1;
        //cout<<"temp "<<temp<<endl;
    }
    int u,v;
    for (int i = 0; i < n-1; i++)
    {
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    dfs(1);
    rootdfs(1,-1,0);
    if(ans){
        cout<<-1<<"\n";
    }else{
        cout<<total<<"\n";
    }
    memset(present,0,sizeof(present));
    ans = false;
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