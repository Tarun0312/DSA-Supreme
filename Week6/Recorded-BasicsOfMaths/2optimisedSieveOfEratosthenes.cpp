//optimised sieve of eratosthenes

#include<iostream>
using namespace std;

vector<bool> Sieve(int n){

    vector<bool> sieve(n+1,true);
    //create a sieve array of n size telling isPrime
    sieve[0]=sieve[1]=false;

    for(int i=0;i*i<=n;i++){ //optimsation 2 (outer loop)
        if(sieve[i]){
            // int j = i*2; 
            int j = i*i;  //optimisation 1 (inner loop)
            //first unmarked no. would be i*i,as others have been marked by 2 to i-1
            while (j<=n)
            {
                sieve[j] = false;
                j+=i;
            }  

        }

    }

    return sieve;
}
//TC -> O(nlog(logn))
//SC -> O(n)


//segmented sieve 
//here L and R are inclusive
vector<bool> segSieve(int L,int R){

    //generate all primes to mark segmented sieve using normal sieve n=root R

    vector<bool> sieve=Sieve(sqrt(R));
    vector<int> basePrimes;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i])
            basePrimes.push_back(i);
    }
    vector<bool> segmentedSieve(R-L+1,true);
    if(L==1){
        segmentedSieve[L-1]=false;
    }

    //find starting index for every multiple of basePrime
    for(auto prime : basePrimes){
        int first_multiple = (L/prime)*prime;
        if(first_multiple < L){
            first_multiple+=prime;
        }
        int j = max(first_multiple,prime*prime);

        while(j<=R){
            segmentedSieve[j-L]=false;
            j+=prime;
        }
    }

    return segmentedSieve;
    
}
//tc and sc of ss same as normal sieve

int main(){
    
    // vector<bool>sieve = Sieve(105);

    // for(int i=0;i<=105;i++){
    //     if(sieve[i])
    //         cout<<i<<" ";
    // }

    int L = 1,R=10;
    vector<bool>ss = segSieve(L,R);

    for(int i=0;i<ss.size();i++){
        if(ss[i])
            cout<<i+L<<" ";
    }
    return 0;
}