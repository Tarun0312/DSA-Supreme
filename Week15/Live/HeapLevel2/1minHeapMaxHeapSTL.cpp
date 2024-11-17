#include<iostream>
#include<queue>
using namespace std;


int main(){

    //Creation of max heap
    priority_queue<int> pq;

    //insertion
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    cout<<"Top element in heap is "<<pq.top()<<endl;

    //pop
    pq.pop();

    cout<<"Top element in heap is "<<pq.top()<<endl;
    

    //Creation of min heap

    priority_queue<int,vector<int>,greater<int>> pq1;

    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    pq1.push(50);

    cout<<"Top element of min heap is : "<<pq1.top()<<endl;

    pq1.pop();

    cout<<"Top element of min heap is : "<<pq1.top()<<endl;

    return 0;
}