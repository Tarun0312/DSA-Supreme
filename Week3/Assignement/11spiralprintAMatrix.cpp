// https://leetcode.com/problems/spiral-matrix/description/

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//       // 4*4 matrix
//       // 1 Print starting row 0 1 
//       // 2 ending column 3 2 
//       // 3 ending row 3 2
//       // 4 starting column 0 1 

    

//     int rows=matrix.size();
//     int cols=matrix[0].size();
//     int total_Elements=rows*cols;
//     int countCells=0;
//     vector<int> ans;

//     int startingRow = 0;
//     int endingCol=cols-1;
//     int endingRow=rows-1;
//     int startingCol=0;

//     while(countCells != total_Elements){

//         // 1 Print starting row 
//         for(int j=startingCol;j<=endingCol && countCells!=total_Elements;j++){  
//             ans.push_back(matrix[startingRow][j]);
//             countCells++;
//         }
//             startingRow++;

//         // 2 ending column
//         for(int i=startingRow;i<=endingRow && countCells!=total_Elements;i++){     
//             ans.push_back(matrix[i][endingCol]);
//             countCells++;
//         }
//             endingCol--;

//         // 3 ending row
//         for(int j=endingCol;j>=startingCol && countCells!=total_Elements;j--){    
//             ans.push_back(matrix[endingRow][j]);
//             countCells++;
//         }
//             endingRow--;

//         //4 starting column
//         for(int i=endingRow;i>=startingRow && countCells!=total_Elements;i--){
//             ans.push_back(matrix[i][startingCol]);
//             countCells++;
//         }
//             startingCol++;
      
//     }

//     return ans;

//     }
// };