#include<bits/stdc++.h>
using namespace std;
////
class Tree
{
    public:
        int val;
        Tree *left, *right;
    Tree(int val)
    {
        this->val=val;
        left=NULL;
        right=NULL;
        //cout<<val;
    }
    void TreeAddLeft(Tree *root, Tree *node)
    {
        if(root->left==NULL)
        {
            root->left=node;
            return;
        }
        TreeAddLeft(root->left,node);
    }
    void TreeAddRight(Tree *root, Tree *node)
    {
        if(root->right==NULL)
        {
            root->right=node;
            return;
        }
        TreeAddLeft(root->right,node);
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
    Tree* root=new Tree(100);
    Tree* node;
    Tree *t;
    for(int i=1;i<10;i++)
    {
        node=new Tree(i);
        if(i%2!=0)
        {
          t->TreeAddLeft(root,node);
        }
        else
        {
          t->TreeAddRight(root,node);
        }
    }
    t->printTree(root);


}

