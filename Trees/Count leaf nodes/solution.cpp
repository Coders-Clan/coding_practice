
int count = 0;
int numLeafNodes(TreeNode<int>* root) {
        
     if(root == NULL)
         return 0;
    
    if(root -> children.size() == 0){
        count++;
    }
    
    for(int i = 0; i < root -> children.size(); i++){
        numLeafNodes(root -> children[i]);
    }
    return count;

}
