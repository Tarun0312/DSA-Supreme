//https://practice.geeksforgeeks.org/problems/product-of-primes5328/1

//{ Driver Code Starts
// Initial Template for C++

#include<iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    vector<bool> sieveofEratosthenes(int N){
        vector<bool> sieve(N+1,true);
        sieve[0]=sieve[1]=false;
        
        for(int i=0;i*i<=N;i++){
            if(sieve[i]){
                int j = i*i;
                while(j<=N){
                    sieve[j]=false;
                    j+=i;
                }
            }
          
        }
        
        return sieve;
    }
    
    vector<bool> segSieve(long long L,long long R){
        
        vector<bool> sieve = sieveofEratosthenes(sqrt(R));
     
        vector<int> basePrimes;
        for(int i=0;i<sieve.size();i++){
            if(sieve[i]){
                basePrimes.push_back(i);
            } 
        }
         
        vector<bool> ss(R-L+1,true);
        
        if(L==1){
            ss[L-1]=false;
        } 
        for(auto prime : basePrimes){
            int firstMultiple = (L/prime)*prime;
            if(firstMultiple < L){
              firstMultiple +=prime;  
            }
            
            int j = max(firstMultiple,prime*prime);
            
            while(j<=R){
                ss[j-L]=false;
                j+=prime;
            }
        }
        return ss;
        
    }
    
    long long primeProduct(long long L, long long R){
        // code here
        long long ans = 1;
        long long M=1000000007;
        vector<bool> ss=segSieve(L,R);
        for(int i=0;i<ss.size();i++){
            if(ss[i]){
              ans = (ans * (i+L))%M;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends