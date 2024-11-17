
// C++ Program for the above approac
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

// function to print the Union fo two
// arrays arr1 and arr2
void printUnion(vector<int> nums1, vector<int> nums2, int m, int n){
    // sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());
    // int i = 0;
    // int j = 0;
    // while(i < m && j < n){
    //     if(arr1[i] < arr2[j]){
    //         cout<<arr1[i]<<" ";
    //         i++;
    //     }
    //     else if(arr2[j] < arr1[i]){
    //         cout<<arr2[j]<<" ";
    //         j++;
    //     }
    //     else{
    //         cout<<arr2[j]<<" ";
    //         i++;
    //         j++;
    //     }
    // }
     
    // // printing remaining elemens fo the alrger array
    // while(i < m){
    //     cout<<arr1[i]<<" ";
    //     i++;
    // }
    // while(j < n){
    //     cout<<arr2[j]<<" ";
    //     j++;
    // }

    //above logic not work for duplicate eleemnet in two arary

    // vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<nums1.size();i++) mp.insert({nums1[i],i});
    for(int j=0;j<nums2.size();j++) mp.insert({nums2[j],j});

    // for(auto itr = mp.begin();itr!=mp.end();itr++){
    for(auto itr : mp){
        // ans.push_back(itr->first);
        cout<<itr.first<<" ";
    }
    // return ans;
}
 

    // 
// function prints intersection of arr1 and arr2
void printIntersection(vector<int> arr1, vector<int> arr2, int m, int n){
    // sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());
    // int i = 0;
    // int j = 0; 
    // while(i < m && j < n){
    //     if(arr1[i] < arr2[j]){
    //         i++;
    //     }
    //     else if (arr2[j] < arr1[i]){
    //         j++;
    //     }
    //     else{
    //         cout<<arr2[j]<<" ";
    //         i++;
    //         j++;
    //     }
    // }
    //issue in above logic

    class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto it:nums1){
            if(mp[it]==0){
                mp[it]++;
            }
        }

        for(auto it:nums2){
            if(mp[it]==1){
                ans.push_back(it);
                mp[it]--;
            }
        }

        return ans;
    }
};

}
 
// // driver program to test above functions
int main(){
    vector<int> arr1 = { 7, 1, 5, 2, 3, 6 };   
    vector<int> arr2 = { 3, 8, 6, 20, 7,7 };   
    int m = arr1.size();
    int n = arr2.size();
     
    // function call
    cout<<"Union of two arrays is : ";
    printUnion(arr1, arr2, m, n);
     
    cout<<endl<<"Intersection of two array is : ";
    printIntersection(arr1, arr2, m, n);
}