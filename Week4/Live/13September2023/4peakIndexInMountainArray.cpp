// https://leetcode.com/problems/peak-index-in-a-mountain-array/

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
        
//         int n = arr.size();
//         int start = 0;
//         int end = n - 1;

//         while(start<end){
//             int mid = start + (end - start)/2;
//             if(arr[mid] < arr[mid+1]){
//                 //A wali line pr hai
//                 //peak element right mei exist krta hai
//                 start = mid + 1;
//             }else{
//                 //B line pr hai ya peak element pr
//                 //left mei jao mid-1 kro
//                 //but agr peak pr huye toh peak lost ho jaayega toh end = mid kro so that peak lost na
//                 //ho
//                 end = mid; // end = mid kra hai toh start<end kro otherwise infinte loop mei stuck hoge
//             }
//         }
//         return start;//return end

//         //TC -> O(logn)
//         //Sc -> O(1)

//     }

// };