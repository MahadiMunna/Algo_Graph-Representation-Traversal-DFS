#include <bits/stdc++.h>
using namespace std;
void init_code(){
}

const int N = 1e3+5;
int adjmat[N][N];

int main(){
    init_code();
    int n,m;cin>>n>>m;

    //unweighetd

    // for(int i=0;i<m;i++){
    //     int u,v;cin>>u>>v;
    //     adjmat[u][v]=1;//just [u][v] because directed. For undirected need [v][u] too.
    //     // adjmat[v][u]=1;
    // }

    //weighted
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adjmat[u][v]=w;//just [u][v] because directed. For undirected need [v][u] too.
        adjmat[v][u]=w;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}