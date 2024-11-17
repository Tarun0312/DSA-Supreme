// https://leetcode.com/problems/longest-common-prefix/description/

// class Solution {
// public:
//     // string longestCommonPrefix(vector<string>& strs) {
        
//     //     string ans = "";
//     //     int i = 0;
//     //     while(true){
//     //         char currChar = 0;
//     //         for(auto str : strs){
//     //             if(i>=str.length()){
//     //                 //out of bound
//     //                 currChar = 0;
//     //                 break;
//     //             }
//     //             //just started
//     //             if(currChar==0){
//     //                 currChar = str[i];
//     //             }else if(currChar != str[i]){
//     //                 //mismatch
//     //                 currChar = 0;
//     //                 break;
//     //             }
//     //         }

//     //         if(currChar==0){
//     //             break;
//     //         }
//     //         ans.push_back(currChar);
//     //         i++;
//     //     }
//     //     return ans;
//     // }
//     // tc  -> O(NM) N -> length of strs M -> length of largest string in array strs
//     //sc -> O(M)

//     //using sorting
//     string longestCommonPrefix(vector<string>& strs) {
        
//         string ans;
//         sort(strs.begin(),strs.end());
//         string firstString = strs[0];
//         string lastString = strs[strs.size()-1];

//         for(int i=0;i<min(firstString.length(),lastString.length());++i){
//             if(firstString[i]!=lastString[i]){
//                 return ans;
//             }
//             ans.push_back(firstString[i]);
//         }
//         return ans;
//         // tc -> nlogn
//         //sc -> O(M)

//     }
// };