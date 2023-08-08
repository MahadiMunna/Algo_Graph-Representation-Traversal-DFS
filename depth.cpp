#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
vector<int> adj[N];
bool visited[N];
int depth[N];

void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(visited[v]) continue;
        depth[v] = depth[u]+1;
        dfs(v);
    }
}
int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
    }
    dfs(1);
    int d;cin>>d;
    cout<<"Depth of "<<d<<" = "<<depth[d];
    return 0;
}