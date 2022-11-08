BinaryTreeNode<int>* lcaOfThreeNodes(BinaryTreeNode<int>* root, int node1, int node2, int node3) {
   // Write your code here
   if(root==NULL)
       return NULL;
   if(root->data==node1)
   {
       return root;
   }
   else if(root->data==node2)
   {
     return root;  
   }
   else if(root->data==node3)
   {
      return root;
   }
   BinaryTreeNode<int>*a= lcaOfThreeNodes(root->left,node1,node2,node3);
   BinaryTreeNode<int>*b= lcaOfThreeNodes(root->right,node1,node2,node3);
   if(a!=NULL&&b==NULL)
       return a;
   else if(a==NULL&&b!=NULL)
   {
       return b;
   }
   else if(a==NULL&&b==NULL)
       return NULL;
   else
   {
       return root;
   }
}
