#include<iostream>
#include<stack>

using namespace std;


// insert At Bottom Of Stack

void insertAtBottom(stack<int> &st,int element){

    //base case
    if(st.empty()){
        st.push(element);
        return;
    }

    //1 case hum solve krenge
    int temp = st.top();
    st.pop();

    //baaki recusion sambhal lega
    insertAtBottom(st,element);

    //backtracking
    st.push(temp);
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

    int element = 5;
    insertAtBottom(st,element);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}


