// https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1

// class Solution {
//   public:
//     int countNodes(struct Node* root){
//         if(root==NULL) return 0;
//         int res = 1 + countNodes(root->left) + countNodes(root->right);
//         return res;
//     }
    
//     bool isCBT(struct Node* tree,int idx,int totalNodes){
//         if(!tree) return true;
//         if(idx>=totalNodes)return false;
//         else{
//             bool leftAns = isCBT(tree->left,2*idx+1,totalNodes);
//             bool rightAns = isCBT(tree->right,2*idx+2,totalNodes);
            
//             return leftAns && rightAns;
//         }
//     }
    
//     bool isMaxHeap(struct Node* root){
        
//         //leaf node
//         if(!root->left && !root->right) return true;
        
//         if(root->right==NULL){
//             return root->data > root->left->data;
//         }else{
//             bool leftAns = isMaxHeap(root->left);
//             bool rightAns = isMaxHeap(root->right);
            
//             return ((root->data > root->left->data) && (root->data > root->right->data)) &&
//                    ( leftAns && rightAns);
//         }
        
//     }
//     bool isHeap(struct Node* root) {
//         // code here
 
        
//         if(root==NULL) return true;
//         int totalNodes = countNodes(root);
//    return (isCBT(root,0,totalNodes)) && (isMaxHeap(root));
      
         
//     }
    
// };