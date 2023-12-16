// https://www.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// int preOrderTraversal(Node* root,int& k,int node){
//     if(root==NULL) return -1;
    
//     //N
//     if(root->data==node){
//         k--;
//         return 0;
//     }
//     //L
//     int leftAns = preOrderTraversal(root->left,k,node);
//     //R
//     int rightAns =  preOrderTraversal(root->right,k,node);
    
//     if(max(leftAns,rightAns)==0){
//         //0 means hme node mili thi pehele k-- bhi kiya
//         //check kro k==0 hai ya nhi
//         if(k==0) return root->data;
//         k--;
//     }
//     return max(leftAns,rightAns);
// }
// int kthAncestor(Node* root, int k, int node)
// {
//     // Code here
    
    
//     //step 1 : find the node using preorder traversal
//     //step 2 : k-- ,when k==0 ,we have reached the answer
//     int ans = preOrderTraversal(root,k,node);
//     return (ans==0 )? -1 : ans;
 
// }