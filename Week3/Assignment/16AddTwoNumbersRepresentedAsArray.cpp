// https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/0

// class Solution{
//     public:
//     string calc_Sum(int *a,int n,int *b,int m){
//     // Complete the function
//         // Two pointer
 
//         int i = n-1;
//         int j =  m-1;
//         int carry = 0;
//         string ans;
//         while(i>=0 && j>=0){//agar dono array ke elements finish ho gye toh iska matlab sb add ho chuka hai toh ruk jao
//              //agar kisi bhi ek array ke elements khatam ho gye toh element ko 0 assume kro like a[i]=0 or b[j]=0
//             int sum = a[i] + b[j] + carry;
//             int lastDigit = sum%10;
//             ans.push_back(lastDigit + '0');//intger ko character se map kr diya
//             carry = sum/10;
//             i--;
//             j--;
//         }
        
//         //agar b array  ke elements finish ho gye toh a[i]+0+ carry kro
//         while(i>=0){
//             int sum=a[i]+0+carry;
//             int lastDigit = sum%10;
//             ans.push_back(lastDigit + '0');
//             carry = sum /10;
//             i--;
//         }
        
//          //agar a array  ke elements finish ho gye toh 0+b[j]+ carry kro
//         while(j>=0){
//             int sum=0+b[j]+carry;
//             int lastDigit = sum%10;
//             ans.push_back(lastDigit + '0');
//             carry = sum /10;
//             j--;
//         }
        
//         //agar sb add hone ke baad carry bachega use add kro
//         if(carry){
//             ans.push_back(carry+'0');
//         }
        
//         //Catch sum of  01 + 01 ka 2 hota hai but hmaare case mei 02 aayega toh reverse se pehle 0 ko pop kro do
        
//         while(ans[ans.size()-1]=='0'){
//             ans.pop_back();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };