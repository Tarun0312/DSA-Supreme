// https://leetcode.com/problems/row-with-maximum-ones/description/

// class Solution {
// public:
//     vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
//         int countOnes = INT_MIN;
//         int rowCount = 0;

//         vector<int> ans;
//         for(int row = 0;row < mat.size() ; row++){
//             int count = 0;
//             for(int col=0; col < mat[row].size();col++){
//                 if(mat[row][col]==1){
//                     count++;
//                 }
//             }
//             if(count > countOnes){
//                 countOnes = count;
//                 rowCount = row;
//             }
//         }
//         ans.push_back(rowCount);
//         ans.push_back(countOnes);

//         return ans;
//     }
// };