// https://leetcode.com/problems/balanced-binary-tree/


// class Solution {
// public:
//     // using recursion
//     // int height(TreeNode* root){
//     //     if(root==NULL) return 0;

//     //     int leftHeight = height(root->left);
//     //     int rightHeight = height(root->right);
//     //     int finalAns = max(leftHeight,rightHeight)+1;

//     //     return finalAns;
//         //tc -> O(n)
//         //sc-> O(h) height of a tree or O(n)
//     // }

//     int height(TreeNode* root){
//         //using level order traversal

//         //corner case
//         if(root==NULL) return 0;

//         queue<TreeNode*> q;

//         //mainitain initial state
//         q.push(root);
//         q.push(NULL);
//         int count=1;
        
//         while(!q.empty()){
//             TreeNode* front = q.front();
//             //front -> Valid node -> PUSH CHILD 
//                  // -> NULL 
//             q.pop();

//             if(front==NULL){
//                 //null 
//                 //level complete ho gya
//                 if(!q.empty()) {
//                     count++;
//                     q.push(NULL);
//                 }
//             }else{
//                 //valid node
//                 if(front->left!=NULL) q.push(front->left);
//                 if(front->right) q.push(front->right);
//             }
//         }
//         return count;
//         //tc -> O(n)
//         //sc -> O(max no. of chidren in a level)
//     }
//     bool isBalanced(TreeNode* root) {

//         //corner case
//         if(root==NULL) return true;

//         int leftHeight = height(root->left);
//         int rightHeight = height(root->right);
//         int diff = abs(leftHeight-rightHeight);

//         bool currNode = (diff<=1);

//         bool leftAns = isBalanced(root->left);
//         bool rightAns = isBalanced(root->right);

//         return (currNode && leftAns && rightAns);
//         //tc -> O(n)
//         //sc -> O(n)
//     }
// };