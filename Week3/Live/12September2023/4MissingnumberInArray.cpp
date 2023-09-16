// https://leetcode.com/problems/missing-number/description/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
    //     int i,j;

    // Approach 1  //Brute Force

    //     for(i=0 ; i<=n ; i++){
    //         for(j=0 ; j<n ; j++){
    //             if(i==nums[j]){
    //                 break;
    //             }
    //         }
    //         if(j==n){
    //             break;
    //         }
    //     }
    //     return i;
    

    // TC ->O(n*n)
    // SC ->O(1)

    //Approach2 TotalSum(n element) - sum(sum of given array),then we get missing number

    int sum=0;
    for(int index = 0; index < n ;index++){
        sum+=nums[index];
    }
    int totalSum = (n * (n + 1))/2; //AP formula sum of n natural numbers

    int answer = totalSum - sum;

    return answer;
    }

    // TC ->O(n)
    // SC ->O(1)

};