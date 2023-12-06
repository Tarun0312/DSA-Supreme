#include<iostream>
#include<queue>
using namespace std;

void reverseQueueUsingRecursion(queue<int>& q){
    //base case
    if(q.empty()){
        return;
    }
    //1 case hum solve krenge
    int temp = q.front();
    q.pop();

    //rest is handled by recursion
    reverseQueueUsingRecursion(q);

    //backtracking
    q.push(temp);
}
//tc -> O(n)
//sc -> O(n) it will take more overhead due to maintain pointers for each function call


int main(){


    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseQueueUsingRecursion(q);

    //print queue after reversing
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}