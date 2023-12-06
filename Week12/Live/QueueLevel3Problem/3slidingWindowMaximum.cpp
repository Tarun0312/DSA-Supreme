// https://leetcode.com/problems/sliding-window-maximum/description/

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> ans;
//         deque<int> dq;
//         int n = nums.size();

//         //process first window
//         for(int i=0;i<k;i++){
//             int element = nums[i];
            
//             //hitne bhi queue ke andar chhote elements ko remove kr do
//             while(!dq.empty() && element > nums[dq.back()]){
//                 dq.pop_back();
//             }

//             //insert an index
//             dq.push_back(i);
//         }


//         //process the remaining window
//         //ans store
//         //removal
//         //addition

//         for(int i=k;i<n;i++){
//             int element = nums[i];
//             ans.push_back(nums[dq.front()]); //at least 1 elemnt toh hoga hi so no need to check empty
//             // deque condition

//             //removal-> out of range index for current window
//             while(!dq.empty() && i-dq.front()>=k){
//                 dq.pop_front();
//             }
//             //removal small elements
//             while(!dq.empty() && element > nums[dq.back()]){
//                 dq.pop_back();
//             }

//             //insert
//             dq.push_back(i);
//         }

//         //store ans of last window 
//         ans.push_back(nums[dq.front()]);

//         return ans;
//     }
// };