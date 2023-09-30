// https://leetcode.com/problems/search-a-2d-matrix/

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int rows = matrix.size();
//         int cols = matrix[0].size();
//         int totalBoxes = rows * cols;

//         int s = 0,e = totalBoxes-1;

//         while(s<=e){
//             int mid = s + (e-s)/2;
//             int rowIndex = mid /cols;
//             int colIndex = mid % cols;
//             int currentNumber = matrix[rowIndex][colIndex];

//             if(currentNumber == target){
//                 return true;
//             }else if(target > currentNumber){
//                 //right
//                 s = mid + 1;
//             }else{
//                 //left
//                 e = mid - 1;
//             }
//         }
//         return false;
//     }
// };