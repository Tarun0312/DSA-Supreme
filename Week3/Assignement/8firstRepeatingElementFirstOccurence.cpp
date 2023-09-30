// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include<iostream>
using namespace std;

//return index (1 based) of first repating element + first occurence
//i/p 2,3,4,5,3,5 o/p 2

void printArray(vector<int> arr){
    cout<<endl;

    for(auto it : arr)
    cout<<it<<" ";

    cout<<endl;
}
unordered_map<int,int> frequency(int arr[],int n){
    unordered_map<int,int> hash;

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    return hash;
}


int firstRepeatingElement(int arr[],int n){
   
   //store frequency in an array (hash table)
   //iterate each element if it has occurence in future using frequency array 
   //if frequency > 1 then return the i + 1(position 1 based) 


   unordered_map<int,int> freq = frequency(arr,n);
    //    printArray(freq);

    for(int i=0;i<n;i++){
        int index = arr[i];
        if(freq[index]>1){
            return i+1;
        }

    }
    return -1;

    //tc->O(n)+O(n)=O(n)
    //sc->O(n)
}
int main(){

    int arr[] = {1,2,2,3};
    int n = sizeof(arr)/sizeof(int);

    cout<<firstRepeatingElement(arr,n);

}

// class Solution {
//   public:
//     // Function to return the position of the first repeating element.
//     int bruteForce(int arr[],int n){
//         //brute force
//        for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//                if(arr[i]==arr[j]){
//                    return i+1;
//                }
//            }
//        }

//         return -1;
//         //tle 
//         //tc->o(n*n)
//         //sc->o(1)
//     }
    
//     unordered_map<int,int> frequency(int arr[],int n){
//         // store frequency/ occurence in hash table
//         unordered_map<int,int> hash;
//         for(int i=0;i<n;i++){
//             hash[arr[i]]++;
//         }
        
//         return hash;
//     }
    
//     //without using unordered_map
    
//     vector<int> freq(int arr[],int n){
        
//         int maxValue = INT_MIN;
//         for(int i=0;i<n;i++){
//            maxValue=max(maxValue,arr[i]);
//         }
        
//         vector<int> hash(maxValue+1);
//         for(int i=0;i<n;i++){
//             hash[arr[i]]++;
//         }
        
//         return hash;
//     }
    
//     int firstRepeated(int arr[], int n) {
//         // code here
//         // return bruteForce(arr,n); //tle
        
//         // unordered_map<int,int> hashTable = frequency(arr,n);
//         vector<int> hashTable = freq(arr,n);
        
//         for(int i=0;i<n;i++){
//             int index = arr[i];
//             if(hashTable[index] > 1){
//                 return i+1;
//             }
//         }
        
//         return -1;
//     }
// };