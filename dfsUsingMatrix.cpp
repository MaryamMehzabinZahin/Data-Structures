#include<bits/stdc++.h>
using namespace std;

class Graph
{
    public:
       int v;
       vector<vector<int>> matrix;
       vector<bool> visited;
       Graph(int v)
       {
           this->v=v;
           matrix.assign(v,vector<int>(v,0));
           visited.assign(v,false);
       }
       void addEdge(int a, int b)
       {
           matrix[a-1][b-1]=1;
           matrix[b-1][a-1]=1;
       }

       void dfs(int src)
        {
            int row=src-1;
            cout<<src<<" , ";
            visited[row]=true;
            for(int i=0;i<v;i++)
               {
                   if(i==row || visited[i]==true) continue;
                   if(matrix[row][i]==1)
                   {
                       //cout<<i+1<<" ";
                       visited[i]=true;
                       dfs(i+1);
                   }
               }
        }

        void displayGraph()
        {
            for(int i=0;i<v;i++)
            {
                cout<<i+1<<"-> ";
                for(int j=0;j<v;j++)
                {
                    if(matrix[i][j]==1)
                    {
                        cout<<j+1<<" , ";
                    }
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
    //g->displayGraph();
    g->dfs(3);

}
