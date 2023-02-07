#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    void addedge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction)
        {
            adj[v].push_back(u);
        }
   }
    void printgraph(){
        for(auto i : adj){
            cout<<i.first<<"--> ";

            for (auto j : i.second){
                cout<<j<<","<<endl;
            }
            
        }
    }
};

int main()
{
    int n,u,v;
    // number of nodes
    cout<<"emter no. of nodes";
    cin>>n;
    int m;
    cout<<"emter no. of edges";
    // number of edges
    cin>>m;
    graph g;
    for (int i = 0; i < m; i++)
    {
       cin>>u>>v;
       g.addedge(u,v,0);
    }
    g.printgraph();
    
    return 0;
}