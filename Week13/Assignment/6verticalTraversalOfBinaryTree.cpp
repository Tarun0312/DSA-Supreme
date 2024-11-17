
// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/


// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
        
//         //use level order traversal code
//         //col wise left to right traverse ,rowwise  top to bottom traverse ,if mutiple nodes in 
//         //same row ,then sort using multiset
//         //row and col sort bcoz sort we are using map

//         vector<vector<int>> ans;

//         queue<pair<TreeNode*,pair<int,int>>> q; // {node,{row,col}}
//         //bhul gya tha
//         //initial state of queue
//         q.push({root,{0,0}});
//         map<int,map<int,multiset<int>>> mp; // col -> {row : [x,y,z... in sorted order]}

//         while(!q.empty()){
//             auto front = q.front();
//             q.pop();

//            //expand front
//             TreeNode*& node = front.first;
//             auto & coordinate = front.second;
//             int & row = coordinate.first;
//             int & col = coordinate.second;
            
//             //insert vertical val in map
//             mp[col][row].insert(node->val);

//             //push child in queue if exist
//             if(node->left!=NULL) {
//                 //left child
//                 q.push({node->left,{row+1,col-1}});
//             }
//             if(node->right!=NULL){
//                 q.push({node->right,{row+1,col+1}});
//             }
//         }


//         //store final vertical into ans vector
//         for(auto it : mp){
//             auto& colMap = it.second;
//             vector<int>vLine;
//             for(auto colMapIt : colMap){
//                 auto& mSet = colMapIt.second;
//                 vLine.insert(vLine.end(),mSet.begin(),mSet.end());
//             }
//             ans.push_back(vLine);
//         }
//         return ans;
//tc -> O(n)
//sc -> O(n)
//     }
// };