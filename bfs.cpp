
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    public:
    int V;
    unordered_map <char,list<char>> umap;
//    Graph(int V)
//    {
//        this->V=V;
//       // l=new list<int>[V];
//    }
    void create_edge(char x,char y)
    {
        umap[x].push_back(y);
        umap[y].push_back(x);
    }

    void print()
    {
        for(auto it:umap)
        {

            char src=it.first;
            cout<<src<<"->";
            list<char> nbrs=it.second;
            for(auto itr:nbrs)
            {
                cout<<itr<<",";
            }
            cout<<endl;
        }
    }
    void bfs(char src)
    {
        queue<char> nbrs;
        unordered_map<char,bool> visited;
        nbrs.push(src);
        visited[src]=true;
        while(!nbrs.empty())
        {
            char node=nbrs.front();
            nbrs.pop();
            cout<<node<<endl;
            for(auto nbr:umap[node])
            {
                if(visited[nbr]!=true)
                {
                    nbrs.push(nbr);
                    visited[nbr]=true;
                }

            }

        }
    }
};

int main()
{
    Graph obj;
    obj.create_edge('A','B');
    obj.create_edge('A','C');
    obj.create_edge('B','D');
    obj.create_edge('B','C');
    obj.bfs('D');
    obj.print();
}
