#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//i/p 10 20 30 40 50 k=3
//o/p 30 20 10 40 50
void reverseKElementsOfQueue(queue<int>& q,int k){
    int n = q.size();
    stack<int> st;

    //base case
    if(q.empty()){
        return;
    }


    if( k>n || q.size()==0){
        return;
    }

    //step1: push first k elements into stack
    for(int i=0;i<k;i++){
        int temp = q.front();
        q.pop();

        st.push(temp);
    }

    //step2: pop and push elements of stack into queue
    while(!st.empty()){
        int temp = st.top();
        st.pop();

        q.push(temp);
    }
    // reverseKElementsOfQueue(q,k);

    // //step3: pop and push first(n-k) elements of queue in queue
    for(int i=0;i<n-k;i++){
        int temp = q.front();
        q.pop();

        q.push(temp);
    }
    //   40 30  20 10 80 70 50 60

     
}
//tc -> O(n)
//sc-> O(n)


int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    int k = 4;
   
    reverseKElementsOfQueue(q,k);

    //print queue after reversing
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}