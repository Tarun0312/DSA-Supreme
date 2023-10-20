// https://leetcode.com/problems/count-primes/

// class Solution {
// public:
//     bool checkPrimeNaiveApproach(int n){
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool checkPrimeSqrtApproach(int n){
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }

//     // int countPrimes(int n) {
//     //     int count=0;
//     //     for(int i=2;i<n;i++){
//     //         if(checkPrimeNaiveApproach(i)){
//     //             count++;
//     //         }
//     //     }
//     //     return count;
//     // }

//     int countPrimes(int n) {
//         if(n==0) return 0;

//         vector<bool> prime(n,true); // all are prime marked already
//         prime[0]=prime[1]=false;

//         int count=0;
//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 count++;

//                 int j=i*2;
//                 while(j<n){
//                     prime[j]=false;// marking non-prime all the multiples of a prime number
//                     j+=i;
//                 }
//             }
//         }
//         return count;
//     }
//     //Tc -> O(nlog(logn))
//     //Sc -> O(n)
// };