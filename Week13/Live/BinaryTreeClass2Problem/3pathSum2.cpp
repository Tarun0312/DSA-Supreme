// https://leetcode.com/problems/path-sum-ii/description/


// class Solution {
// public:

//     void solve(TreeNode* root, int targetSum,int sum,vector<int> temp,vector<vector<int>>& ans){

//         //base case
//         if(root==NULL) return;

//         //1 case hum solve krenge
//         sum+=root->val;
//         temp.push_back(root->val);

//         //extra case
//         if(root->left==NULL && root->right==NULL){
//             //i am standing on the laef node
//             //verify
//             if(sum==targetSum){
//                 //store temp path in final ans
//                 ans.push_back(temp);
//             }else{
//                 return;
//             }
//         }

//         //baaki recursion sambhal lega
//         //left subtree recursion call
//         solve(root->left,targetSum,sum,temp,ans);

//         //right subtree recursion call
//         solve(root->right,targetSum,sum,temp,ans);
//     }
//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         int sum = 0;
//         solve(root,targetSum,sum,temp,ans);

//         return ans; 
//     }
// };