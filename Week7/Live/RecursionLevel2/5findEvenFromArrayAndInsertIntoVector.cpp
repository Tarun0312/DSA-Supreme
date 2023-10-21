#include<iostream>

using namespace std;




void findEven(int arr[],int n,int index,vector<int>& ans){
    if(index>=n){
        return;
    }
    if((arr[index]&1)==0){
        //even
        ans.push_back(arr[index]);
    }
    
    findEven(arr,n,index+1,ans);
}
// TC ->O(n)
// SC ->O(n)

int main(){

     int arr[]={10,11,12,13,14};
    int n = 5;
    int index=0;
    vector<int> ans;
    findEven(arr,n,index,ans);

    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}