#include <bits/stdc++.h>
using namespace std;
void init_code(){
}

const int N = 1e6+5;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u){
    //section 1: actions just after entering node u
    visited[u] = true;
    // cout<<"Visiting node: " << u <<endl;
    for(int v:adj[u]){
        //section 2: actions before entering a new neighbor
        if(visited[v]) continue;
        depth[v] = depth[u]+1;
        dfs(v);
        // if(height[v]+1>height[u])
        //     height[u] = height[v]+1;
        height[u] = max(height[u],height[v]+1);
        //section 3: actions after exiting a neighbor
    }
    //section 4: actions before exiting a node u
}

int main(){
    init_code();
    int n,m;cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    for(int i=1;i<=n;i++){
        cout<<"Depth of Node: "<<i<<": "<<depth[i]<< endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"Height of Node: "<<i<<": "<<height[i]<< endl;
    }


    // cout<<"Visited Nodes: \n";
    // for(int i=1;i<=n;i++){
    //     cout<<"Node "<<i<<" status: "<<visited[i]<<endl;
    // }
    return 0;
}