#include<iostream>
#include<stack>

using namespace std;

//reverse stack
//one way -> 1 stack ko doosre mei copy krrwa do

void reverseStack(stack<int> &st,stack<int> &ans){

    while(!st.empty()){
        int temp = st.top();
        ans.push(temp);
        st.pop();
    }
}

//2nd way using recursion and then bactrack using insertAtBottom

void insertAtBottom(stack<int>& st,int element){
    //base case
    if(st.empty()){
        st.push(element);
        return ;
    }

    //1 case hum solve krenge
    int temp = st.top();
    st.pop();

    //baaki recursion sambhal lega
    insertAtBottom(st,element);

    //backtracking
    st.push(temp);
}

void reverseStackUsingRecursion(stack<int>& st){

    //base case
    if(st.empty()){
        return;
    }

    //1 case hum sambhal lenge
    int temp = st.top();
    st.pop();

    //recursion
    reverseStackUsingRecursion(st);

    //backtrack
    insertAtBottom(st,temp);
}

// tc -> O(n^2)
// sc-> O(n)
int main(){

    stack<int> st,ans;
    st.push(10);
    st.push(0);
    st.push(5);
    st.push(20);
    st.push(30);
    st.push(40);

    // reverseStack(st,ans);
    reverseStackUsingRecursion(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}