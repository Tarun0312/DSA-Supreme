#include<iostream>
#include<unordered_map>
using namespace std;


int main(){

    string s = "abbaacdeed";

    unordered_map<char,int> mp;
    for(auto it:s){
        char ch = it;
        mp[it]++;
    }

    for(auto it : mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}