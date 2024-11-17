// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// https://leetcode.com/problems/two-sum/

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>indices;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
        }   
}  

string twoSumSorting(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

vector<int> twoSum(int n, vector<int> &arr, int target) {
   map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
    //tc -> nlogn
    //sc o(n)
}


int main(){
    vector<int> x;
    x=twoSum(x,20);
}

