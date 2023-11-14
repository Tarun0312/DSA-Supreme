#include<iostream>
#include<stack>

using namespace std;



int main(){

    string str = "tarun kumar";
    stack<char> st;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        st.push(ch);
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}
// tc -> O(n)
// sc-> O(n)