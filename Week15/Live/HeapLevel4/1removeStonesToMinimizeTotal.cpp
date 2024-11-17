// https://leetcode.com/problems/remove-stones-to-minimize-the-total/description/

// class Solution {
// public:
//     int minStoneSum(vector<int>& piles, int k) {
        
//         int n = piles.size();
//         priority_queue<int> maxHeap;
//         for(int i=0;i<n;i++){
//             maxHeap.push(piles[i]);
//         }

//         while(k--){
//             //pattern
//             //top element fetch,then pop,then process,then push
//             int topElement = maxHeap.top();
//             maxHeap.pop();

//             //process 
//             topElement = topElement - floor(topElement/2);
//             maxHeap.push(topElement);
//         }
        
//         int sum = 0;
//         while(!maxHeap.empty()){
//             int topElement = maxHeap.top();
//             maxHeap.pop();
//             sum+=topElement;
//         }

//         return sum;
//     }
// };

//insert,delete,heapify,