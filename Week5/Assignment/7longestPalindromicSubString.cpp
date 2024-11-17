// https://leetcode.com/problems/longest-palindromic-substring/description/

// class Solution {

//     // bool isPalindrome(string s,int start,int end){
//     //     while(start<end){
//     //         if(s[start]!=s[end]){
//     //             return false;
//     //         }
//     //         start++,end--;
//     //     }
//     //     return true;
//     // }
//     // string longestPalindrome(string s) {
        
//     //     //step1 find substrings of string
//     //     //step2 check palindrome
//     //     //step3 maxlength palindrome

//     //     string ans="";
//     //     for(int i=0;i<s.size();i++){
//     //         for(int j=i;j<s.size();j++){
//     //             if(isPalindrome(s,i,j)){
//     //                 string t = s.substr(i,j-i+1);
//     //                 ans = t.size() > ans.size() ? t : ans;
//     //             }
//     //         }
//     //     }
//     //     return ans;

//     //     // tc-> O(n^3)
//     //     //sc -> O(1)
//     // }

//     //optimised
//     //expansion from center
// private:
//     string expand(string s,int i,int j){
//         while(0<=i && j<s.size() && s[i]==s[j]) i--,j++;
//         return s.substr(i+1,j-i-1);

//     }
// public:
//     string longestPalindrome(string s) {
        
//         string ans = "";
//         for(int i=0;i<s.size();i++){
//             string odd = expand(s,i,i);
//             string even = expand(s,i,i+1);

//             if(ans.size() < odd.size()) ans = odd;
//             if(ans.size() < even.size()) ans = even;
//         }
//         return ans;
//         //tc -> O(n^2)
//         //sc -> O(1)
//     }
// };