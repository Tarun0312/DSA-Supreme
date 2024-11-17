// https://leetcode.com/problems/valid-palindrome-ii/

// class Solution {
// public:
//     bool checkPalindrome(string& temp,int i,int j){
//         //two pointer
//         while(i<=j){
//             if(temp[i]!=temp[j])
//                 return false;
//             else
//                 i++,j--;
//         }
//         return true;
//     }

//     bool validPalindrome(string s) {
//         int n = s.length();
//         int i=0,j=n-1;
        

//         while(i<j){  //or i<=j then on same index 
//             if(s[i]!=s[j]){
//                 //at most 1 removal allowed(0,1)
//                 //check palindrome for remaining string after removal

//                 // ith character-> removal
//                 bool result1 = checkPalindrome(s,i+1,j); 
//                 // jth character-> removal
//                 bool result2 = checkPalindrome(s,i,j-1);

//                 bool ans = result1 || result2;
//                 return ans;
//             }else{
//                 //s[i]==s[j]
//                 i++,j--;
//             }
//         }
//         //agar yahan tk pahuche iska mtlb if mei kbhi gye hi nhi 
//         //it means given string is a palindrome
//         //it means no removal 
//         //return true
//         return true;;
//     }
// };

