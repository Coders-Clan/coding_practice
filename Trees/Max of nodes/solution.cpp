TreeNode<int>* maxNodes(TreeNode<int>*root)
{
   TreeNode<int>*curr = root;
  
  for(int i=0;i<root->children.size();i++)
  {
     TreeNode<int>*child=  maxNodes(root->children[i]);
    if(curr->data < child->data)
      curr = child;
  }
  return curr;
}
