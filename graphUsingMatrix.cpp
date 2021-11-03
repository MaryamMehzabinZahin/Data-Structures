#include<bits/stdc++.h>
using namespace std;

class Graph
{
    public:
       int v;
       vector<vector<int>> matrix;
       Graph(int v)
       {
           this->v=v;
           matrix.assign(v,vector<int>(v,0));
       }
       void addEdge(int a, int b)
       {
           matrix[a-1][b-1]=1;
           matrix[b-1][a-1]=1;
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
    g->addEdge(1,3);
    g->addEdge(2,4);
   // g->addEdge(4,5);
    g->displayGraph();

}
