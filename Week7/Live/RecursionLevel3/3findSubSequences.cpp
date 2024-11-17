#include<iostream>

using namespace std;

//using include - exclude pattern
//either include current charcter of str or exlude current charcter of str

void findSubSequences(string str,string output,int index,vector<string>& ans){
    
    // Base case
    if(index>=str.length()){
        //ans jo hai woh output string mei build ho chuka so print kr do
        // cout<<"-> "<<output<<endl;

        //what if we have to store subsequences in vector
        ans.push_back(output);
        return ;
    }

    char ch = str[index];

    // agar exclude pehle kroge then ise use kro niche waale ko
    
    //include
    output.push_back(ch);
    findSubSequences(str,output,index+1,ans);
    //exclude
    //ch outpt string mei add hai already but we have to exclude
    // so pop back
    output.pop_back();
    findSubSequences(str,output,index+1,ans);


    // agar exclude pehle kroge then ise use kro niche waale ko

    // //exclude 
    // findSubSequences(str,output,index+1);

    // //include
    // output.push_back(ch);
    // findSubSequences(str,output,index+1);
}

// TC ->O(2^n)
// SC -> O(n)

int main(){

    string str = "abcf";
    string output = "";
    int index = 0;
    // findSubSequences(str,output,index);

    //what if we have to store subsequences in vector
    vector<string> ans;
    findSubSequences(str,output,index,ans);

    for(auto str : ans){
        cout<<"-> "<<str<<endl;
    }
    return 0;
}