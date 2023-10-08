// https://leetcode.com/problems/decode-the-message/

// class Solution {
// public:
//     string decodeMessage(string key, string message) {
//         string ans;
//         //create mapping (substitution table)
//         int n = key.length();
//         char mapping[257]={0};
//         char starting='a';
//         for(int i=0;i<n;i++){
//             if(key[i]!=' ' &&  mapping[key[i]]==0)
//             { 
//                 mapping[key[i]]=starting;
//                 starting++;
//             }
//         }
        
//         // use mapping to decode message
//         int message_length=message.length();
//         for(int i=0;i<message_length;i++){
//             if(message[i]!=' ')
//             {   char decodedChar = mapping[message[i]];
//                 ans.push_back(decodedChar);
//             }   
//             else
//               ans.push_back(' ');
//         }

//         return ans;

//         // TC- O(N)
//         // SC->O(n) for answer string
//     }
// };