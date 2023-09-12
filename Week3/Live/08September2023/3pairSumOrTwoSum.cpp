// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// https://leetcode.com/problems/two-sum/

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
#include<iostream>
#include<vector>
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

int main(){
    vector<int> x;
    x=twoSum(x,20);
}

