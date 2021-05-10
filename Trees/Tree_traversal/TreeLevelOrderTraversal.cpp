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
    cout<<"enter root data "<<endl;
    cin>>rootData; // stored the root value
    TreeNode<int>* root = new TreeNode<int>(rootData);   //added the root value to the structure
    queue<TreeNode<int>*> PendingNodes;
    PendingNodes.push(root);    //pushed the root in the queue
    while (PendingNodes.size()!=0)
    {
      TreeNode<int>*front = PendingNodes.front(); // in order to store the front element in the structure
      PendingNodes.pop();   // to remove it comepletely from the queue
      cout<<"enter no of children of "<<front->data<<endl;
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
      {
        int childData;
        cout<<"enter"<<i<<" child data of "<<front->data<<endl;
        cin>>childData;
        TreeNode<int>*child = new TreeNode<int>(childData);  // dynamically createc as to maintain a connection b/w the nodes
        front->children.push_back(child);    // will bring the child to front
        PendingNodes.push(child);
      }
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
