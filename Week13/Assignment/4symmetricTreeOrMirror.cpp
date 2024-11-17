
// https://leetcode.com/problems/symmetric-tree/

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
   
//     bool isMirror(TreeNode* p,TreeNode* q){
        
//         //leaf node
//         if(!p && !q) return true;

//         if(p && q){
//             //check values
//     //kisi particular node ke jo left mei hoga mirror lgaane ke baad woh us particular ke right 
//     //mei milega
//     //similarly kisi particular node ke jo right mei hoga mirror lgaane ke baad woh us 
//     //particular node ke left mei milega
//             return (p->val == q->val)  &&
//                     isMirror(p->left,q->right) &&
//                     isMirror(p->right,q->left);
//         }
//         return false;
//     }
//     bool isSymmetric(TreeNode* root) {
//         return isMirror(root->left,root->right);
//         //tc -> O(n)
//         //sc -> O(n)
//     }
// };