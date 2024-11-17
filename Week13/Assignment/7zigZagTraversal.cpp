// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if(!root) return ans;
//         queue<TreeNode*> q;
//         bool leftToRight = true;
//         q.push(root);

//         while(!q.empty()){
//             int width = q.size();//size of each level
//             vector<int> oneLevel(width);

//             for(int i=0;i<width;i++){
//                 TreeNode* front = q.front();
//                 q.pop();
//                 int index = leftToRight ? i : width - i - 1;
//                 oneLevel[index] = front->val;

//                 //push the child
//                 if(front->left) q.push(front->left);
//                 if(front->right) q.push(front->right);
//             }
//             //toggle direction
//             leftToRight = !leftToRight;
//             ans.push_back(oneLevel);
//         }
//         return ans;
//         //tc -> O(n)
//         //sc -> O(n) vector
//     }
// };