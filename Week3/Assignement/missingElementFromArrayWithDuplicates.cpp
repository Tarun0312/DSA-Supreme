#include<iostream>
#include<vector>
using namespace std;

//I/p 2,1,2,3,4 o/p 5

int missingElementFromArrayWithDuplicates(vector<int>& nums){
    int n = nums.size();
    int ans = -1;
    for(int i=1;i<=n;i++){
        int j=0;
        for(;j<n;j++){
            if(i==nums[j]){
                break;
            }
        }
        if(j==n){
            ans = i;
        }
    }
    return ans;
    //tc->O(n*n) sc->O(1)

}

int main(){
    vector<int> x{1,3,5,3,2};
    cout<<missingElementFromArrayWithDuplicates(x);
}