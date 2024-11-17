#include<iostream>
#include<stack>

using namespace std;


// Insert In A Sorted Stack
//i/p-> 10 20 30 element=15
//o/p-> 30 20 15 10


void insertInSortedStack(stack<int> &st,int element){
    //base case
    //jb bhi st.top() kro underflow case check kro
    //bhul skta hua
    if(st.empty() || element>st.top()){
        st.push(element);
        return;
    }

    //1 case hum solve krenge
    int temp = st.top();
    st.pop();

    //recursion
    insertInSortedStack(st,element);

    //backtrack
    st.push(temp);
}
// tc -> O(n)
// sc-> O(n)
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    

    int element = 15;
    insertInSortedStack(st,element);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}


