#include<bits/stdc++.h>
using namespace std;

template<typename T>
class TreeNode{
    public:
    T data ; 
    vector<TreeNode<T>*> children;
    TreeNode(T data) { this->data = data; }
};
TreeNode<int> *Input()
{
    int rootData;
    cout<<"enter data "<<endl;
    cin>>rootData; // stored the root value
    TreeNode<int>* root = new TreeNode<int>(rootData);   //added the root value to the structure
    int no_child; 
    cout<<"enter no of children "<<endl;
    cin>>no_child;  // stored the children of the root node
    for(int i=0;i<no_child;i++)
    {
        TreeNode<int>*child = Input();       //recursively called them to store value
        root->children.push_back(child);     // adds the children to the structure
    }
  return root;
}
void print(TreeNode<int>*root)
{
 if(root == NULL)  return  ;
  cout<<root->data<<" : ";
for(int i=0;i<root->children.size();i++)
{cout<<root->children[i]->data<<",";
 }
 cout<<endl;
 for(int i=0;i<root->children.size();i++)
  print(root->children[i]);
}

int main()
{
  TreeNode<int>*root = Input();
  
   print(root);
}
