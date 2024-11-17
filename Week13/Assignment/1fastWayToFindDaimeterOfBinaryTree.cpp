// https://leetcode.com/problems/diameter-of-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
//  */
// class Solution {
// public:
//     // int height(TreeNode* root){
//     //     // /corner case
//     //     if(root==NULL) return 0;

//     //     queue<TreeNode*> q;
//     //     q.push(root);
//     //     q.push(NULL);
//     //     int count=1;

//     //     while(!q.empty()){
//     //         TreeNode* front = q.front();
//     //         q.pop();

//     //         if(front==NULL){
//     //             //NULL 
//     //             if(!q.empty()){
//     //                 count++;
//     //                 q.push(NULL);
//     //             }
                   
//     //         }else{
//     //             //valid node
//     //             if(front->left!=NULL) q.push(front->left); 
                
//     //             if(front->right!=NULL) q.push(front->right); 
//     //         }
//     //     }

//     //     return count;
//     //     // tc -> O(n)
//     //     //sc -> O(max no of child in a level)

//     // }
//     // int diameterOfBinaryTree(TreeNode* root) {

//     //     //corner case
//     //     if(root==NULL) return 0;

//     //     int option1 = diameterOfBinaryTree(root->left);
//     //     int option2 = diameterOfBinaryTree(root->right);
//     //     int heightTree = height(root->left) + height(root->right) ;
//     //     int ans = max(option1,max(option2,heightTree));

//     //     return ans;
//     // tc-> O(n^2) for every node ,first fiind diamaeter ,then height
//     //every node ko traverse krenge krenge,phir height ke lye call krenge so n^2
//     //sc -> O(n)
//     // }


//     //optimised -> keep track of height on the way of finding diameter

//     int Diameter=0;
//     int height(TreeNode* root){
//         if(!root) return 0;

//         int lh = height(root->left);
//         int rh = height(root->right);
        
//         int currDiameter = lh + rh;
//         Diameter = max(Diameter,currDiameter); 
//         int ans = max(lh,rh)+1;
//         return ans;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         int ans = height(root);
//         return Diameter;
//         //tc -> O(n) jb height find kr tbhi saath diameter bhi nikal rhe hai 
//         //sc-> O(N)
//     }
// };