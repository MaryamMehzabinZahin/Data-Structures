#include<bits/stdc++.h>
using namespace std;

class Graph
{
    public:
       int v;
       vector<bool> visited;
       unordered_map<int,list<int>> umap;
       Graph(int v)
       {
           this->v=v;
           visited.assign(v+1,false);
       }

       void addEdge(int a, int b)
       {
           umap[a].push_back(b);
           umap[b].push_back(a);
       }

       void dfs(int src)
        {

            cout<<src;
            visited[src]=true;
//            for(auto it:umap)
//            {
//                list<int> nbrs=it.second;
                for(auto itr:umap[src])
                {
                    if(!visited[itr])
                    {
                        visited[itr]=true;
                        cout<<" , ";
                        dfs(itr);

                    }
                }
            //}
        }
        void displayGraph()
        {
            for(auto x:umap)
            {
                int key=x.first;
                cout<<key<<"->";
                list<int> nbrs=x.second;
                for(auto y:nbrs)
                {
                    cout<<y<<", ";
                }
                cout<<endl;
            }
        }
};
int main()
{
    Graph *g=new Graph(4);
    g->addEdge(1,2);
    g->addEdge(2,3);
    g->addEdge(1,4);
   // g->addEdge(4,5);
   // g->displayGraph();
    g->dfs(2);

}
