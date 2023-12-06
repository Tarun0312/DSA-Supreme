#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int>& q){
    //step1: push all the elements of queue in stack

    stack<int> st;
    while(!q.empty()){
        int temp = q.front();
        q.pop();

        st.push(temp);
    }

    //step2: push all the elements from stack to queue
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        q.push(temp);
    }
}
//iterative approach is always better than recursive approach
//tc -> O(n)
//sc -> O(n) for stack but if we done using recursion ,it will take more overhead due to maintain pointers for each function call

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseQueue(q);

    //print queue after reversing
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}