#include<iostream>
#include<vector>

using namespace std;


void printVector(vector<int> a){

  
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
}

void rotate(vector<int>& nums, int k) {
        // algo step1-> store n-k element in temp array
        //      step2-> arr[i]=arr[i-k]
        //      step3-> copy temp in arr

        // int n = nums.size();
        // k= k%n;

        // if(n==1)
        // {
        //     return;
        // }
        // else{
        //         vector<int> temp;
        //         for(int i=n-k;i<size;i++){
        //             temp.push_back(nums[i]);
        //         }        

        //         for(int i=n-1;i>=k;i--){
        //             nums[i] = nums[i-k];
        //         }

        //         for(int i=0;i<k;i++){
        //             nums[i] = temp[i];
        //         }
        // }
        // TC ->O(n)
        // SC ->O(k)


        //Approach 2 modulus

        // int n = nums.size();
        // vector<int> ans(n);
        // int newIndex;
        // for(int index=0 ; index < n ; index++){
        //     newIndex = ( index + k) % n;
        //     ans[newIndex] = nums[index];
        // }

        // nums = ans;

        // TC ->O(n)
        // SC ->O(n)

        
}


int main(){

       vector<int> arr{23};
       rotate(arr,2);
       printVector(arr);
}