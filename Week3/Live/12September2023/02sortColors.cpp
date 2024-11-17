// https://leetcode.com/problems/sort-colors/description/

//dutch  national flag problem

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {

//         int left = 0;//left For Track 0 Index
//         int right= nums.size()-1;//right For Track 2 Index 

//         for(int index = 0; index<=right; ){ // index<=right(2,0,1 dry run)
//             if( nums[index] == 0 ){                       
//                 swap(nums[index],nums[left]);   
//                 left++;
//                 index++; 
//             }else if (nums[index] == 2){
//                 swap(nums[index],nums[right]);
//                 right--;
//                 // catch no need of index++ (1,2,0 case dry run)
//                 //index++yeh nhi krnaaa   remember this bhul skta huun 
//             }else{
//                 index++;
//             }
//     }
 
// };