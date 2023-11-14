

// https://leetcode.com/problems/valid-parentheses/submissions/1098902324/

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             char ch = s[i];
//             if(ch=='(' || ch=='{' || ch=='['){
//                 //open bracket then push in stack
//                 st.push(ch);
//             }else{
                 //closed bracket
//                 if(!st.empty()){
//                         if(ch==')' && st.top()=='('){
//                             st.pop();
//                         }
//                         else if(ch=='}' && st.top() == '{'){
//                             st.pop();
//                         }
//                         else if(ch == ']' && st.top() == '['){
//                             st.pop();
//                         }
//                         else{
//                             //no match
//                             return false;
//                         }
//                 }else{
//                     return false;
//                 }
                
//             }
//         }

//         if(st.empty()){
//             //stack empty and string complete traverse then
//             return true;
//         }else{
//             return false;
//         }
//     }

//     //tc -> O(n)
//     //sc -> O(n)
// };