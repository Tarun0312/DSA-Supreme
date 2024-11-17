// https://leetcode.com/problems/maximum-average-subarray-i/


// class Solution {
// public:
//     int sum(vector<int>& a,int i,int j){
//         int sum=0;

//         for(int k=i;k<=j;k++){
//             sum+=a[k];
//         }

//         return sum;
//     }

//     double bruteForce(vector<int>& nums,int& k){
//         int n = nums.size();
//         double maxAvg = 0.0;
//         int i=0,j=k-1;
//         int maxSum=INT_MIN;

//         while(j<n){
//             int s = sum(nums,i,j);
//             maxSum = max(maxSum,s);
//             j++;
//             i++;
//         }
//         maxAvg = (double)maxSum/k; //maximum avg
//         return maxAvg;
//         // TC -> O(n^2)
//         //SC ->O(1)
//     }

//     double slidingWindow(vector<int>& nums,int k){

//         int n = nums.size();
//         int i=0,j=k-1;
//         double maxAvg;
//         int s = sum(nums,i,j);
//         int maxSum=s;

//         j++; //k==n single window

//         while(j<n){
//             s = s - nums[i++]
//             s = s + nums[j++];
//             maxSum = max(maxSum,s);
//         }

//         maxAvg = maxSum/(double)k;

//         return maxAvg;

//         // TC -> O(n)
//         //SC ->O(1)
//     }

//     double findMaxAverage(vector<int>& nums, int k) {
//     // return bruteSum(nums,k);
//         return slidingWindow(nums,k);
//     }
// };