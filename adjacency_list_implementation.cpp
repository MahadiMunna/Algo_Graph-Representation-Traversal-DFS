#include <bits/stdc++.h>
using namespace std;
void init_code(){
}

const int N = 1e6+5;
// vector<int> adj[N];//unweighted
vector<pair<int,int>> adj[N];//weighted

int main(){
    init_code();
    int n,m;cin>>n>>m;

    // unweighetd
    // for(int i=0;i<m;i++){
    //     int u,v;cin>>u>>v;
    //     adj[u].push_back(v);//just[u].push_back(v) because directed. For undirected need [v].push_back(u) too.
    //     adj[v].push_back(u);
    // }

    //weighted
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v,w});//just[u].push_back({v,w}) because directed. For undirected need [v].push_back({u,w}) too.
        adj[v].push_back({u,w});
    }

    for(int i=1;i<=n;i++){
        cout<<"List "<<i<<": ";
        for(auto j:adj[i]){
            cout<<"( "<<j.first<<","<<j.second<<" )"<<" ";
        }
        cout<<endl;
    }
    return 0;
}