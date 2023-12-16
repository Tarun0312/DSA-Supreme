// https://leetcode.com/problems/diameter-of-binary-tree/

// class Solution {
// public:
//     int height(TreeNode* root){
//         // /corner case
//         if(root==NULL) return 0;

//         queue<TreeNode*> q;
//         q.push(root);
//         q.push(NULL);
//         int count=1;

//         while(!q.empty()){
//             TreeNode* front = q.front();
//             q.pop();

//             if(front==NULL){
//                 //NULL 
//                 if(!q.empty()){
//                     count++;
//                     q.push(NULL);
//                 }
                   
//             }else{
//                 //valid node
//                 if(front->left!=NULL) q.push(front->left); 
                
//                 if(front->right!=NULL) q.push(front->right); 
//             }
//         }

//         return count;
//         // tc -> O(n)
//         //sc -> O(max no of child in a level)

//     }
//     int diameterOfBinaryTree(TreeNode* root) {

//         //corner case
//         if(root==NULL) return 0;

//         int option1 = diameterOfBinaryTree(root->left);
//         int option2 = diameterOfBinaryTree(root->right);
//         int heightTree = height(root->left) + height(root->right) ;
//         int ans = max(option1,max(option2,heightTree));

//         return ans;
//     }
// };