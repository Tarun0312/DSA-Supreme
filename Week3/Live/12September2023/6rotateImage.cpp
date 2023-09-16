// https://leetcode.com/problems/rotate-image/

// class Solution {
// public:

//     void reverseVector(vector<int>& arr ){

      
//       int n = arr.size();
//       int left = 0;
//       int right = n-1;

//       while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//       }

//     }

//     void rotate(vector<vector<int>>& matrix) {
//         //i/p array
//         // o/p 90  degree rotate
//         //array -> transpose -> reverse each row -> 90 degree rotate

//         int n = matrix.size();

//         //transpose of a matrix
//         for(int i = 0 ; i < n ; i++){
//           for(int j=i+1; j < matrix[i].size() ; j++ ){
//               swap(matrix[i][j],matrix[j][i]);
//           }
//         }
//         //tc-> o(n^2)

//         //reverse each row
//         for(int i = 0 ; i < n ;i++ ){
//             reverseVector(matrix[i]);
//         }
//         //tc-> o(n^2)



//         // TC -> o(n^2)
//         // SC -> O(1)
//     }
// };

