#include<iostream>
#include<stack>

using namespace std;



int main(){

    //stack creation
    stack<int> st;


    // insertion 
    st.push(10);
    st.push(20);
    st.push(30);

    //size of stack
    cout<<"Size of stack is "<<st.size()<<endl;

    //remove top element
    st.pop();
    cout<<"Size of stack is "<<st.size()<<endl;

    //check Empty

    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    //top element
    cout<<st.top()<<endl;

    return 0;
}