#include<iostream>

using namespace std;


void printAllIndexOfTargetOccurence(int a[],int n,int index,int target){
    if(index>=n) {
        return ;
    }

    if(a[index]==target) cout<<index<<" ";
    printAllIndexOfTargetOccurence(a,n,index+1,target);
}

//return vector which contains all the occurences
vector<int> findIndex(int a[],int n,int index,int target){
    vector<int> ans;
    if(index>=n) {
        return ans;
    }
    if(a[index]==target){
        ans.push_back(index);
    }

    vector<int> recAns = findIndex(a,n,index+1,target);
    
    vector<int> finalAns;
    for(auto a : ans){
        cout<<"ans a "<<a<<" ";
        finalAns.push_back(a);
    }
    cout<<endl;
    for(auto a : recAns){
        cout<<"recAns a "<<a<<" ";
        finalAns.push_back(a);
    }

    return finalAns;
}
// TC -> O(n)
// Sc ->O(n)

int main(){

    int a[]={1,2,1,2,1,33,3,31,1};
    int n = 9;
    int target = 1;
    int index = 0;
    // printAllIndexOfTargetOccurence(a,n,index,target);
    vector<int> ans = findIndex(a,n,index,target);
    for(int element : ans) cout<<element<<" ";

    return 0;
}