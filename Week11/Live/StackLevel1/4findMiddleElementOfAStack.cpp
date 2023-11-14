#include<iostream>
#include<stack>
using namespace std;

// find middle element of a stack
//in odd size -> position of middle element from top = size/2 + 1
// in even size -> position of middle element from top = size/2

//type 2 question -> deleteMiddleElementOfStack
void solve(stack<int> &st,int pos,int &ans){
    
    //base case
    if(pos==1){
        //findMiddleElementOfStack 
        ans = st.top();

        //deleteMiddleElementOfStack
        st.pop();
        return;
    }

    //1 case hum solve krenge
    pos -- ;
    int temp = st.top();
    st.pop();

    //baaki recusion sambhal lega
    solve(st,pos,ans);

    //backtracking
    st.push(temp);
}

int findMiddleElementOfStack(stack<int>& st){

    int size = st.size();
    if(st.empty()){
        // cout<<"Stack is empty,no middle element\n";
        return -1;
    }
    else{
        //stack is not empty
        int pos = 0;
        if(size & 1){
            //odd size of stack
            pos = size/2 + 1;
        }else{
            //even size of stack 
            pos = size/2;
        }

        int ans = -1;
        solve(st,pos,ans);
        return ans;
    }
}

// tc -> O(n)
// sc-> O(n)

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout<<"Before deletion,stack size is "<<st.size()<<endl;
    cout<<"Middle element of stack is "<<findMiddleElementOfStack(st)<<endl;
    cout<<"After deletion,stack size is "<<st.size()<<endl;
    return 0;
}