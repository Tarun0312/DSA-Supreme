// https://leetcode.com/problems/find-and-replace-pattern/

// class Solution {
// public:
//     //this function normalises the pattern and word in similar format so that we can compare them and
//     // find the solution 
//     void createMapping(string& s){
//         char start = 'a';
//         char mapping[257]={0};

//         for(auto ch : s){
//             if(mapping[ch]==0){
//                 mapping[ch]=start;
//                 start++;
//             }           
//         }

//         //update the string
//         for(int i=0;i<s.length();i++){
//             char ch = s[i];
//             s[i]=mapping[ch];
//         }
//     }

//     vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
//         vector<string> ans;

//         //firstly normalises the pattern
//         createMapping(pattern);

//         //saare words ko same format mei convert kro and match kro
//         for(int i=0;i<words.size();i++){

//             string wordMapping =words[i];
//             createMapping(wordMapping);
            
//             //match pattern mapping and word mapping
//             if(pattern == wordMapping)
//                 //words[i] matches given pattern ,it is a valid ans
//                 ans.push_back(words[i]);

//         }

//         return ans;

//         //TC ->O(n^2)
//         //Sc ->O(1)
//     }
// };