#include<iostream>
#include<queue>

using namespace std;

// push -> back/rear/end
// pop -> front in queue
int main(){

    //creation 
    queue<int> q;

    //insertion
    q.push(10);

    //size
    cout<<"Size of queue is "<<q.size()<<endl;

    //insertion
    q.push(20);
    q.push(30);
     q.push(40);

    cout<<"Front element is "<<q.front()<<endl;

    //remove element 
    q.pop();

    cout<<"Front element is "<<q.front()<<endl;

    q.pop();
    cout<<"Front element is "<<q.front()<<endl;
    
    //underflow mei 0 aa rha queue mei
    q.pop();
    cout<<"Front element is "<<q.front()<<endl;

    cout<<q.empty()<<endl;
    cout<<"Front element is "<<q.front()<<endl;
    cout<<"Back element is "<<q.back()<<endl;
    return 0;
}