#include<iostream>

using namespace std;

void findIndexOfTargetInString(string& s,int index,char target){
    if(index>=s.length()) return;
    if(s[index]==target) cout<<index<<" ";
    findIndexOfTargetInString(s,index+1,target);
}
// TC -> O(n)
// Sc ->O(n)

void findIndexAndStoredInVector(string& s,int index,char target,vector<int>& ans){
    if(index>=s.length()) return;
    if(s[index]==target) ans.push_back(index);
    findIndexAndStoredInVector(s,index+1,target,ans);
}
// TC -> O(n)
// Sc ->O(n)

int main(){

    string s = "Babbar";
    char target = 'a';
    int index = 0;
    findIndexOfTargetInString(s,index,target);
    vector<int> ans;
    findIndexAndStoredInVector(s,index,target,ans);
    for(auto a: ans){
        cout<<a<<" ";
    }
    return 0;
}