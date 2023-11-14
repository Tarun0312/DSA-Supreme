#include<iostream>
#include<stack>

using namespace std;

// sort a stack 
//use code of insert in a sorted stack for backtracking

void insertInSortedStack(stack<int>& st,int element){
    //base case
    if(st.empty() || element > st.top()){
        st.push(element);
        return;
    }

    //1 case hum solve krenge
    int temp = st.top();
    st.pop();
    
    // baaki recusion smbhal lega
    insertInSortedStack(st,element);

    //backtracking
    st.push(temp);
}
void sortAStack(stack<int> &st){

    //base case
    if(st.empty()){
        return;
    }

    //1 case hum solve krenge
    int temp = st.top();
    st.pop();

    //baaki recursion sambhal lega
    sortAStack(st);

    //backtracking
    insertInSortedStack(st,temp);

}
// tc -> O(n^2)
// sc-> O(n)
int main(){

    stack<int> st;
    st.push(10);
    st.push(0);
    st.push(20);
    st.push(90);
    st.push(-8);
    st.push(3);

    sortAStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}