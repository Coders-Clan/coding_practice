void  PrintAtLevel(TreeNode<int>*root, int k)  // k is the level at which we need the nodes 
{
  if (root == NULL) return;
  if(k==0) 
  cout<<root->data<<endl;
  for(int i=0;i<root->children.size();i++)
  {
    PrintAtLevel(root->children[i],k-1);
  }
}
