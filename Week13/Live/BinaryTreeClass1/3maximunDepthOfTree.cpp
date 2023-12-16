// https://leetcode.com/problems/maximum-depth-of-binary-tree/

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int heightUsingRecursion(TreeNode* root){
//         //base case 
//         if(root==NULL)
//             return 0;
        
//         int leftHeight = heightUsingRecursion(root->left);
//         int rightHeight = heightUsingRecursion(root->right);

//         int maxHeight = max(leftHeight,rightHeight)+1;
//         return maxHeight;

//         // tc -> O(n)
//         //sc -> O(N)
//     }

//     int heightUsingLevelOrderTraversal(TreeNode* root){

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

//     int maxDepth(TreeNode* root) {
//         // return heightUsingRecursion(root);
//         return heightUsingLevelOrderTraversal(root);
//     }
// };