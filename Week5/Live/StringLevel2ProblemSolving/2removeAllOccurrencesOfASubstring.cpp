// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
        
//         while(s.find(part)!=string::npos){ //Tc O(n)
//             s.erase(s.find(part),part.length()); //Tc O(n)
//         }
//         return s;

//         //Tc O(n)
//         //Sc O(1)
//     }
// };