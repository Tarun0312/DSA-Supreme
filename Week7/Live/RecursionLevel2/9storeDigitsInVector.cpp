#include<iostream>

using namespace std;


void digitsInVector(int n,vector<int>& ans){
    if(n==0) return ;
    digitsInVector(n/10,ans);
    ans.push_back(n%10);
}
// TC -> O(n)
// Sc ->O(n)

void vectorToDigits(vector<int> a,int index,int& ans){
    if(index>=a.size()) return ;
    ans = ans*10 + a[index];
    vectorToDigits(a,index+1,ans);
}
// TC -> O(n)
// Sc ->O(n)

int main(){

    // int n =91245;
    // vector<int> ans;
    // digitsInVector(n,ans);
    // for(auto a : ans){
    //     cout<<a;
    // }

     vector<int> digits = {4,2,1,5};
     int index = 0,ans =0;
     vectorToDigits(digits,index,ans);
     cout<<ans;
    return 0;
}