
// class Solution {
// public:
//     vector<int> factorial(int N){
//         // code here
//         vector<int> ans;
//         ans.push_back(1);//initilaized with 1 so that multiplication is possible
//         int carry = 0;
//         for(int i=2;i<=N;i++){
//             for(int j=0;j<ans.size();j++){
//                 int f = ans[j]*i + carry;
//                 ans[j]=f%10;//last digit in array
//                 carry = f/10;
//             }
//             //agar carry bacha hai toh answer mei push back kr do
//             //*********catch carry 1 se zyada digit ka bhi ho skta toh loop use kro
//             while(carry){
//                 ans.push_back(carry%10);
//                 carry/=10;
//             }
//         }
//         //abhi factorial ulta store hai toh reverse kro
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
