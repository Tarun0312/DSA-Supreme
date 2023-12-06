// important
//gas station,pertrol pump,circular game


// https://leetcode.com/problems/gas-station/description/


// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int deficit = 0;
//         int balance = 0;

//         //index from where movement is started
//         int start = 0;

//         //har ek index ko check kro, ki woh ans hai ya nhi
//         for(int i=0;i<gas.size();i++){
//             balance += gas[i]-cost[i];

//             if(balance < 0){
//                 deficit += abs(balance);
//                 start = i+1;
//                 balance = 0;
//             }
//         }

//         if(balance - deficit  >= 0){
//             //circular nature
//             return start;
//         }else{
//             return -1;
//         }
//         //tc -> o(n)
//         //sc -> O91
//     }
// };