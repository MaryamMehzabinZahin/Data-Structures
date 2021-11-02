#include <bits/stdc++.h>
using namespace std;


class Tree
{
public:
    int val;
    Tree *left,*right;
    Tree(int val)
    {
        this->val=val;
        left=NULL;
        right=NULL;
    }

};

class TreeFunction
{
public:

    void addNode(Tree *root, Tree *node)
    {
        //cout<<root->val<<" "<<node->val;
        deque<Tree*> dq;
        dq.push_back(root);
       // cout<<dq.front()->val;
        while(!dq.empty())
        {
            Tree *temp;
            temp=dq.front();
            dq.pop_front();
            if(temp->left==NULL)
            {
                temp->left=node;
                return;
            }
            else{
                dq.push_back(temp->left);
            }
            if(temp->right==NULL)
            {
                temp->right=node;
                return;
            }
            else{
                dq.push_back(temp->right);
            }

        }

    }
     void printTree(Tree *root)
    {
        if(root==NULL) return;
        cout<<root->val<<"\n";
        printTree(root->left);
        printTree(root->right);
    }
};



int main()
{
   Tree *root,*node;
   root=new Tree(100);
   TreeFunction *p;

   for(int i=1;i<10;i++)
   {
       node=new Tree(i);
       p->addNode(root,node);
   }

   p->printTree(root);

}
