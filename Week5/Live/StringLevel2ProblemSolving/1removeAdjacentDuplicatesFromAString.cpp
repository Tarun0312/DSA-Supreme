#include<iostream>
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

using namespace std;


string removeDuplicates(string s) {
        // Two Pointer
        //Approach -> i points unique character index
                    //j points to array traverse
                    //if a[i]==a[j] then remove both charcaters and update j and i
                    //catch hai i ko -1 nhi bnane dena
                    //else i++ ,j++


        int i=0; //unique character index
        int j=1; //array traverse
        // abbaxa
        while(j<s.length()){
            if(s[i]==s[j]){
                s.erase(i,2);
                if(i!=0){
                    j=i;
                    i=i-1;
                }
            }else{
                i++;
                j++;
            }
        }
   
    return s;

    // TC -> O(n)
    //Sc -> O(1)
}

int main(){
    string s="aaabbannnccccbazqqq";
    string ans=removeDuplicates(s);
    cout<<ans;
    return 0;
}

string twopointerApproach(string& s){
        // Two Pointer
        //Approach -> i points unique character index
                    //j points to array traverse
                    //if a[i]==a[j] then remove both charcaters and update j and i
                    //catch hai i ko -1 nhi bnane dena
                    //else i++ ,j++


        int i=0; //unique character index
        int j=1; //array traverse
        // abbaxa
        while(j<s.length()){
            if(s[i]==s[j]){
                s.erase(i,2);
                if(i!=0){
                    j=i;
                    i=i-1;
                }
            }else{
                i++;
                j++;
            }
        }
   
    return s;

    // TC -> O(n)
    //Sc -> O(1)
}