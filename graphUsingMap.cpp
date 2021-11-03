#include<bits/stdc++.h>
using namespace std;

class Graph
{
    public:
        unordered_map<int,list<int>> umap;
        void addEdge(int a,int b)
        {
            umap[a].push_back(b);
            umap[b].push_back(a);
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
    Graph *g=new Graph();
    g->addEdge(1,2);
    g->addEdge(1,3);
    g->addEdge(2,4);
    g->addEdge(4,5);
    g->displayGraph();

}
