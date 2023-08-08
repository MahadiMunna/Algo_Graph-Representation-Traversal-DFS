#include <bits/stdc++.h>
using namespace std;
void init_code(){

}
const int N = 1e6+7;
vector<int> adj[N];
bool visited[N];
void rev_dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(visited[v]) continue;
        rev_dfs(v);
    }
    cout<<u<<" ";
}
int main(){
    init_code();
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
    }
    rev_dfs(1);

    return 0;
}