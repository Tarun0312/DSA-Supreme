// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/

// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
//         //base cases

//         if(root==NULL) return NULL;
//         if(p->val == root->val) return p;
//         if(q->val == root->val) return q;

//         TreeNode* leftAns = lowestCommonAncestor(root->left,p,q);
//         TreeNode* rightAns = lowestCommonAncestor(root->right,p,q);

//         if(leftAns==NULL && rightAns ==NULL) return NULL;
//         else if(leftAns!=NULL && rightAns==NULL) return leftAns;
//         else if(leftAns==NULL && rightAns!=NULL) return rightAns;
//         else return root;

//         //tc -> O(n)
//         //sc -> O(n)
//     }
// };