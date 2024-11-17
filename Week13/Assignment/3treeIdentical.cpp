// https://leetcode.com/problems/same-tree/

// class Solution {
// public:
//     //dono tree ko saath saath traverse kro 
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         //leaf node left=NUll && right=NUll return true

//         if(!p && !q) return true;

//         if(p && q){
//             //both not null ,check val
//             return  (p->val)==(q->val) 
//                     && isSameTree(p->left,q->left) 
//                     && isSameTree(p->right,q->right);
//         }

//         //structure different hai
//         //(p==NUll and q!=Null) || (p!=NUll && q==NULL)
//         return false;
//         // tc-> O(n)
//         //sc -> O(n)
//     }
// };