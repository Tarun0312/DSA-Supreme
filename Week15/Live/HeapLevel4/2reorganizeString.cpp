// https://leetcode.com/problems/reorganize-string/description/

// class Info{
//     public:
//         char val;
//         int count;
//         Info(char val,int count){
//             this->val = val;
//             this->count = count;
//         }
// };

// class Compare{
//     public :
//         bool operator()(Info a,Info b){
//             return a.count < b.count;
//         }
// };
// class Solution {
// public:

//     string reorganizeString(string s) {
//         int freq[26] = {0};

//         //store frequency of each character of string in an array
//         for(int i=0;i<s.length();i++){
//             int element = s[i];
//             freq[element-'a']++;
//         }

//         priority_queue<Info,vector<Info>,Compare> maxHeap;
//         //maxHeap hi use krenge krnege bcoz char with highest frequenecy has max n blocks to be 
//         //used as an option
//         //store all characters in max hgeap where freq>0

//          for(int i=0;i<26;i++){
//              if(freq[i]>0){
//                  char ch = i + 'a';
//                  int count = freq[i];
//                  Info temp(ch,count);
//                  maxHeap.push(temp);
//              }
//         }

//         string ans = "";

//         while(maxHeap.size()>1){
//             //fetch top 2 characters with highest frequenecy
//             //push in ans
//             //update freq
//             //if freq>0 push in maxheap again

//             Info first = maxHeap.top();
//             maxHeap.pop();
//             Info second = maxHeap.top();
//             maxHeap.pop();

//             ans.push_back(first.val);
//             first.count--;
//             ans.push_back(second.val);
//             second.count--;

//             if(first.count>0){
//                 maxHeap.push(first);
//             }
//             if(second.count>0){
//                 maxHeap.push(second);
//             }

//         }

//         //1 element bacha hai use alag se handle kro
//         if(maxHeap.size()==1){
//             Info top = maxHeap.top();
//             maxHeap.pop();

//             ans.push_back(top.val);
//             top.count--;
//             if(top.count!=0){
//                 //answer not possible
//                 return "";
//             }
//         }
//         return ans;
//     }
// };