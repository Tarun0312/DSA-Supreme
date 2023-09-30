// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
        
//         //Two pointer
//         int n = nums.size();

//        int j=0;//position of unique element 
//                //(jahana hai us positiion or usse pehele saare unique elements hai)
//        int i=1;//traverse array

//        while(i<n){{
//            if(nums[i]==nums[j]){
//                //duplicate mila hai 
//                i++;
//            }
//            else nums[++j]=nums[i++];

//         //    else{
//         //        //unique mila hai toh j++ ki position pr rhkawao aur i++ kro
//         //     //    j++;
//         //     //    nums[j]=nums[i]; 
//         //     //    i++;
//         //    }
//        }}
        
//      return j+1;//last unique element index +1

//      //TC ->O(n)
//      //Sc->O(1)
//     }
// };

