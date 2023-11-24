// https://leetcode.com/problems/largest-rectangle-in-histogram/

// class Solution {
// public:

//     vector<int> nextMin(vector<int> arr){
//         int size = arr.size();
//         vector<int> ans(size);
//         stack<int> st;
//         st.push(-1);

//         for(int i=size-1;i>=0;i--){
//             int curr = arr[i];

//             //ans find kro curr ke liye
//             while(st.top()!=-1 && arr[st.top()]>= curr){
//                 st.pop();
//             }
//             ans[i] = st.top();

//             st.push(i);
//         }

//         return ans;
//     }

//     vector<int> prevMin(vector<int> arr){

//         int size = arr.size();
//         vector<int> ans(arr.size());
//         stack<int> st;
//         st.push(-1);

//         for(int i=0;i<arr.size();i++){
//             int curr = arr[i];
//             //ans find kro curr ke liye
//             while(st.top()!=-1 && arr[st.top()]>= curr){
//                 st.pop();
//             }

//             ans[i] = st.top();

//             st.push(i);
//         }
//         return ans;
//     }
//     int largestRectangleArea(vector<int>& heights) {
        
//         vector<int> next = nextMin(heights);
//         //make sure next ke kisi answer mei -1 na ho

//         for(int i=0;i<next.size();i++){
//             if(next[i]==-1){
//                 next[i] = heights.size();
//             }
//         }

//         vector<int> prev = prevMin(heights);

//         int maxii = INT_MIN;
//         for(int i=0;i<heights.size();i++){
//             int width = next[i] - prev[i] -1;
//             int length = heights[i];
//             int area = width * length;
//             maxii = max(maxii,area);
//         }

//         return maxii;
//         //Tc -> O(n)
//         //sc -> O(n)
//     }
// };