#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >>n>>m;
    // graph with n vertices and m edges
    // using adjacency matrix representation
    int adj[n+1][m+1];
    for(int i=0; i<m; i++){
        int u,v,weight;
        cout<<"enter edge (u,v) and weight: ";
        cin >>u>>v;
        cin>>weight;
        adj[u][v] = weight;
        adj[v][u] = weight; // for undirected graphbb
    }
    cout << "Adjacency Matrix:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }

    cin.get();
}